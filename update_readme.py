from pathlib import Path
import re

easy = len(list(Path("Easy").glob("*.*")))
medium = len(list(Path("Medium").glob("*.*")))
hard = len(list(Path("Hard").glob("*.*")))

total = easy + medium + hard

table = f"""| Difficulty | Solved |
|------------|-------:|
| 🟢 Easy | {easy} |
| 🟡 Medium | {medium} |
| 🔴 Hard | {hard} |
| **Total** | **{total}** |
"""

with open("README.md", "r", encoding="utf-8") as f:
    content = f.read()

pattern = r'<!-- STATS_START -->(.*?)<!-- STATS_END -->'

replacement = f'''<!-- STATS_START -->
{table}
<!-- STATS_END -->'''

content = re.sub(pattern, replacement, content, flags=re.S)

with open("README.md", "w", encoding="utf-8") as f:
    f.write(content)

print("README updated!")