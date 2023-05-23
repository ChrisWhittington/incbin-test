# incbin-test
tryign to get incbin running with VS2022 and clang

Microsoft really don't like exe-embedded binary data which means that, for large blocks of binary, we're either forced to load separately by HD or to bodge our source code with predefined data arrays.
For Computer Chess engines running under Windows, loading data from HD becomes a problem, when many engines are running concurrently (typically in cutechess) and all try to load binary data at once - Windows just slows to a crawl and often gives up.

Hence, this attempt to get round the problem. First off, you need to change the VS Project->Properties->Language Toolset to clang. And then .... well, imnpasse unless this code can be fixed.
