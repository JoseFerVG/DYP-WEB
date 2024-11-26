<html><head><meta http-equiv="Content-Type" content="text/html; charset=utf-8"/><title>C++</title><style>
/* cspell:disable-file */
/* webkit printing magic: print all background colors */
html {
	-webkit-print-color-adjust: exact;
}
* {
	box-sizing: border-box;
	-webkit-print-color-adjust: exact;
}

html,
body {
	margin: 0;
	padding: 0;
}
@media only screen {
	body {
		margin: 2em auto;
		max-width: 900px;
		color: rgb(55, 53, 47);
	}
}

body {
	line-height: 1.5;
	white-space: pre-wrap;
}

a,
a.visited {
	color: inherit;
	text-decoration: underline;
}

.pdf-relative-link-path {
	font-size: 80%;
	color: #444;
}

h1,
h2,
h3 {
	letter-spacing: -0.01em;
	line-height: 1.2;
	font-weight: 600;
	margin-bottom: 0;
}

.page-title {
	font-size: 2.5rem;
	font-weight: 700;
	margin-top: 0;
	margin-bottom: 0.75em;
}

h1 {
	font-size: 1.875rem;
	margin-top: 1.875rem;
}

h2 {
	font-size: 1.5rem;
	margin-top: 1.5rem;
}

h3 {
	font-size: 1.25rem;
	margin-top: 1.25rem;
}

.source {
	border: 1px solid #ddd;
	border-radius: 3px;
	padding: 1.5em;
	word-break: break-all;
}

.callout {
	border-radius: 3px;
	padding: 1rem;
}

figure {
	margin: 1.25em 0;
	page-break-inside: avoid;
}

figcaption {
	opacity: 0.5;
	font-size: 85%;
	margin-top: 0.5em;
}

mark {
	background-color: transparent;
}

.indented {
	padding-left: 1.5em;
}

hr {
	background: transparent;
	display: block;
	width: 100%;
	height: 1px;
	visibility: visible;
	border: none;
	border-bottom: 1px solid rgba(55, 53, 47, 0.09);
}

img {
	max-width: 100%;
}

@media only print {
	img {
		max-height: 100vh;
		object-fit: contain;
	}
}

@page {
	margin: 1in;
}

.collection-content {
	font-size: 0.875rem;
}

.column-list {
	display: flex;
	justify-content: space-between;
}

.column {
	padding: 0 1em;
}

.column:first-child {
	padding-left: 0;
}

.column:last-child {
	padding-right: 0;
}

.table_of_contents-item {
	display: block;
	font-size: 0.875rem;
	line-height: 1.3;
	padding: 0.125rem;
}

.table_of_contents-indent-1 {
	margin-left: 1.5rem;
}

.table_of_contents-indent-2 {
	margin-left: 3rem;
}

.table_of_contents-indent-3 {
	margin-left: 4.5rem;
}

.table_of_contents-link {
	text-decoration: none;
	opacity: 0.7;
	border-bottom: 1px solid rgba(55, 53, 47, 0.18);
}

table,
th,
td {
	border: 1px solid rgba(55, 53, 47, 0.09);
	border-collapse: collapse;
}

table {
	border-left: none;
	border-right: none;
}

th,
td {
	font-weight: normal;
	padding: 0.25em 0.5em;
	line-height: 1.5;
	min-height: 1.5em;
	text-align: left;
}

th {
	color: rgba(55, 53, 47, 0.6);
}

ol,
ul {
	margin: 0;
	margin-block-start: 0.6em;
	margin-block-end: 0.6em;
}

li > ol:first-child,
li > ul:first-child {
	margin-block-start: 0.6em;
}

ul > li {
	list-style: disc;
}

ul.to-do-list {
	padding-inline-start: 0;
}

ul.to-do-list > li {
	list-style: none;
}

.to-do-children-checked {
	text-decoration: line-through;
	opacity: 0.375;
}

ul.toggle > li {
	list-style: none;
}

ul {
	padding-inline-start: 1.7em;
}

ul > li {
	padding-left: 0.1em;
}

ol {
	padding-inline-start: 1.6em;
}

ol > li {
	padding-left: 0.2em;
}

.mono ol {
	padding-inline-start: 2em;
}

.mono ol > li {
	text-indent: -0.4em;
}

.toggle {
	padding-inline-start: 0em;
	list-style-type: none;
}

/* Indent toggle children */
.toggle > li > details {
	padding-left: 1.7em;
}

.toggle > li > details > summary {
	margin-left: -1.1em;
}

.selected-value {
	display: inline-block;
	padding: 0 0.5em;
	background: rgba(206, 205, 202, 0.5);
	border-radius: 3px;
	margin-right: 0.5em;
	margin-top: 0.3em;
	margin-bottom: 0.3em;
	white-space: nowrap;
}

.collection-title {
	display: inline-block;
	margin-right: 1em;
}

.page-description {
    margin-bottom: 2em;
}

.simple-table {
	margin-top: 1em;
	font-size: 0.875rem;
	empty-cells: show;
}
.simple-table td {
	height: 29px;
	min-width: 120px;
}

.simple-table th {
	height: 29px;
	min-width: 120px;
}

.simple-table-header-color {
	background: rgb(247, 246, 243);
	color: black;
}
.simple-table-header {
	font-weight: 500;
}

time {
	opacity: 0.5;
}

.icon {
	display: inline-block;
	max-width: 1.2em;
	max-height: 1.2em;
	text-decoration: none;
	vertical-align: text-bottom;
	margin-right: 0.5em;
}

img.icon {
	border-radius: 3px;
}

.user-icon {
	width: 1.5em;
	height: 1.5em;
	border-radius: 100%;
	margin-right: 0.5rem;
}

.user-icon-inner {
	font-size: 0.8em;
}

.text-icon {
	border: 1px solid #000;
	text-align: center;
}

.page-cover-image {
	display: block;
	object-fit: cover;
	width: 100%;
	max-height: 30vh;
}

.page-header-icon {
	font-size: 3rem;
	margin-bottom: 1rem;
}

.page-header-icon-with-cover {
	margin-top: -0.72em;
	margin-left: 0.07em;
}

.page-header-icon img {
	border-radius: 3px;
}

.link-to-page {
	margin: 1em 0;
	padding: 0;
	border: none;
	font-weight: 500;
}

p > .user {
	opacity: 0.5;
}

td > .user,
td > time {
	white-space: nowrap;
}

input[type="checkbox"] {
	transform: scale(1.5);
	margin-right: 0.6em;
	vertical-align: middle;
}

p {
	margin-top: 0.5em;
	margin-bottom: 0.5em;
}

.image {
	border: none;
	margin: 1.5em 0;
	padding: 0;
	border-radius: 0;
	text-align: center;
}

.code,
code {
	background: rgba(135, 131, 120, 0.15);
	border-radius: 3px;
	padding: 0.2em 0.4em;
	border-radius: 3px;
	font-size: 85%;
	tab-size: 2;
}

code {
	color: #eb5757;
}

.code {
	padding: 1.5em 1em;
}

.code-wrap {
	white-space: pre-wrap;
	word-break: break-all;
}

.code > code {
	background: none;
	padding: 0;
	font-size: 100%;
	color: inherit;
}

blockquote {
	font-size: 1.25em;
	margin: 1em 0;
	padding-left: 1em;
	border-left: 3px solid rgb(55, 53, 47);
}

.bookmark {
	text-decoration: none;
	max-height: 8em;
	padding: 0;
	display: flex;
	width: 100%;
	align-items: stretch;
}

.bookmark-title {
	font-size: 0.85em;
	overflow: hidden;
	text-overflow: ellipsis;
	height: 1.75em;
	white-space: nowrap;
}

.bookmark-text {
	display: flex;
	flex-direction: column;
}

.bookmark-info {
	flex: 4 1 180px;
	padding: 12px 14px 14px;
	display: flex;
	flex-direction: column;
	justify-content: space-between;
}

.bookmark-image {
	width: 33%;
	flex: 1 1 180px;
	display: block;
	position: relative;
	object-fit: cover;
	border-radius: 1px;
}

.bookmark-description {
	color: rgba(55, 53, 47, 0.6);
	font-size: 0.75em;
	overflow: hidden;
	max-height: 4.5em;
	word-break: break-word;
}

.bookmark-href {
	font-size: 0.75em;
	margin-top: 0.25em;
}

.sans { font-family: ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI Variable Display", "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol"; }
.code { font-family: "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace; }
.serif { font-family: Lyon-Text, Georgia, ui-serif, serif; }
.mono { font-family: iawriter-mono, Nitti, Menlo, Courier, monospace; }
.pdf .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI Variable Display", "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK JP'; }
.pdf:lang(zh-CN) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI Variable Display", "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK SC'; }
.pdf:lang(zh-TW) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI Variable Display", "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK TC'; }
.pdf:lang(ko-KR) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI Variable Display", "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK KR'; }
.pdf .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; }
.pdf:lang(zh-CN) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; }
.pdf:lang(zh-TW) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; }
.pdf:lang(ko-KR) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; }
.pdf .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK JP'; }
.pdf:lang(zh-CN) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK SC'; }
.pdf:lang(zh-TW) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK TC'; }
.pdf:lang(ko-KR) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK KR'; }
.pdf .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; }
.pdf:lang(zh-CN) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; }
.pdf:lang(zh-TW) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; }
.pdf:lang(ko-KR) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; }
.highlight-default {
	color: rgba(55, 53, 47, 1);
}
.highlight-gray {
	color: rgba(120, 119, 116, 1);
	fill: rgba(120, 119, 116, 1);
}
.highlight-brown {
	color: rgba(159, 107, 83, 1);
	fill: rgba(159, 107, 83, 1);
}
.highlight-orange {
	color: rgba(217, 115, 13, 1);
	fill: rgba(217, 115, 13, 1);
}
.highlight-yellow {
	color: rgba(203, 145, 47, 1);
	fill: rgba(203, 145, 47, 1);
}
.highlight-teal {
	color: rgba(68, 131, 97, 1);
	fill: rgba(68, 131, 97, 1);
}
.highlight-blue {
	color: rgba(51, 126, 169, 1);
	fill: rgba(51, 126, 169, 1);
}
.highlight-purple {
	color: rgba(144, 101, 176, 1);
	fill: rgba(144, 101, 176, 1);
}
.highlight-pink {
	color: rgba(193, 76, 138, 1);
	fill: rgba(193, 76, 138, 1);
}
.highlight-red {
	color: rgba(212, 76, 71, 1);
	fill: rgba(212, 76, 71, 1);
}
.highlight-default_background {
	color: rgba(55, 53, 47, 1);
}
.highlight-gray_background {
	background: rgba(241, 241, 239, 1);
}
.highlight-brown_background {
	background: rgba(244, 238, 238, 1);
}
.highlight-orange_background {
	background: rgba(251, 236, 221, 1);
}
.highlight-yellow_background {
	background: rgba(251, 243, 219, 1);
}
.highlight-teal_background {
	background: rgba(237, 243, 236, 1);
}
.highlight-blue_background {
	background: rgba(231, 243, 248, 1);
}
.highlight-purple_background {
	background: rgba(244, 240, 247, 0.8);
}
.highlight-pink_background {
	background: rgba(249, 238, 243, 0.8);
}
.highlight-red_background {
	background: rgba(253, 235, 236, 1);
}
.block-color-default {
	color: inherit;
	fill: inherit;
}
.block-color-gray {
	color: rgba(120, 119, 116, 1);
	fill: rgba(120, 119, 116, 1);
}
.block-color-brown {
	color: rgba(159, 107, 83, 1);
	fill: rgba(159, 107, 83, 1);
}
.block-color-orange {
	color: rgba(217, 115, 13, 1);
	fill: rgba(217, 115, 13, 1);
}
.block-color-yellow {
	color: rgba(203, 145, 47, 1);
	fill: rgba(203, 145, 47, 1);
}
.block-color-teal {
	color: rgba(68, 131, 97, 1);
	fill: rgba(68, 131, 97, 1);
}
.block-color-blue {
	color: rgba(51, 126, 169, 1);
	fill: rgba(51, 126, 169, 1);
}
.block-color-purple {
	color: rgba(144, 101, 176, 1);
	fill: rgba(144, 101, 176, 1);
}
.block-color-pink {
	color: rgba(193, 76, 138, 1);
	fill: rgba(193, 76, 138, 1);
}
.block-color-red {
	color: rgba(212, 76, 71, 1);
	fill: rgba(212, 76, 71, 1);
}
.block-color-default_background {
	color: inherit;
	fill: inherit;
}
.block-color-gray_background {
	background: rgba(241, 241, 239, 1);
}
.block-color-brown_background {
	background: rgba(244, 238, 238, 1);
}
.block-color-orange_background {
	background: rgba(251, 236, 221, 1);
}
.block-color-yellow_background {
	background: rgba(251, 243, 219, 1);
}
.block-color-teal_background {
	background: rgba(237, 243, 236, 1);
}
.block-color-blue_background {
	background: rgba(231, 243, 248, 1);
}
.block-color-purple_background {
	background: rgba(244, 240, 247, 0.8);
}
.block-color-pink_background {
	background: rgba(249, 238, 243, 0.8);
}
.block-color-red_background {
	background: rgba(253, 235, 236, 1);
}
.select-value-color-uiBlue { background-color: rgba(35, 131, 226, .07); }
.select-value-color-pink { background-color: rgba(245, 224, 233, 1); }
.select-value-color-purple { background-color: rgba(232, 222, 238, 1); }
.select-value-color-green { background-color: rgba(219, 237, 219, 1); }
.select-value-color-gray { background-color: rgba(227, 226, 224, 1); }
.select-value-color-transparentGray { background-color: rgba(227, 226, 224, 0); }
.select-value-color-translucentGray { background-color: rgba(0, 0, 0, 0.06); }
.select-value-color-orange { background-color: rgba(250, 222, 201, 1); }
.select-value-color-brown { background-color: rgba(238, 224, 218, 1); }
.select-value-color-red { background-color: rgba(255, 226, 221, 1); }
.select-value-color-yellow { background-color: rgba(253, 236, 200, 1); }
.select-value-color-blue { background-color: rgba(211, 229, 239, 1); }
.select-value-color-pageGlass { background-color: undefined; }
.select-value-color-washGlass { background-color: undefined; }

.checkbox {
	display: inline-flex;
	vertical-align: text-bottom;
	width: 16;
	height: 16;
	background-size: 16px;
	margin-left: 2px;
	margin-right: 5px;
}

.checkbox-on {
	background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20width%3D%2216%22%20height%3D%2216%22%20fill%3D%22%2358A9D7%22%2F%3E%0A%3Cpath%20d%3D%22M6.71429%2012.2852L14%204.9995L12.7143%203.71436L6.71429%209.71378L3.28571%206.2831L2%207.57092L6.71429%2012.2852Z%22%20fill%3D%22white%22%2F%3E%0A%3C%2Fsvg%3E");
}

.checkbox-off {
	background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20x%3D%220.75%22%20y%3D%220.75%22%20width%3D%2214.5%22%20height%3D%2214.5%22%20fill%3D%22white%22%20stroke%3D%22%2336352F%22%20stroke-width%3D%221.5%22%2F%3E%0A%3C%2Fsvg%3E");
}
	
</style></head><body><article id="10eb4392-0286-81cb-9f83-dcc7f7ec03aa" class="page sans"><header><div class="page-header-icon undefined"><span class="icon">💽</span></div><h1 class="page-title">C++</h1><p class="page-description"></p></header><div class="page-body"><h1 id="10eb4392-0286-8189-a3c0-f5f5ed624ac9" class="">Variables</h1><h2 id="10eb4392-0286-8107-b0cd-cd1e10dba173" class="">=</h2><p id="10eb4392-0286-815f-a9b4-e854641b0879" class="">Al usar un igual a la d derecha de una variable haces que lo que esté a su derecha sea su nuevo valor</p><h2 id="10eb4392-0286-81ee-b5ea-ca152178df23" class="">string</h2><p id="10eb4392-0286-8128-9843-e50cedb36e18" class="">Es para usar caracteres</p><h2 id="10eb4392-0286-8111-8802-f7e30ab66b21" class="">char</h2><p id="10eb4392-0286-814d-a862-e3a7cde9109d" class="">Se usa entre ‘____’</p><p id="10eb4392-0286-81b2-a137-c3b285f783fd" class="">Es un solo caracter</p><h2 id="10eb4392-0286-81b5-ac7e-f12032a2bd34" class="">int</h2><p id="10eb4392-0286-81b8-b66a-f44a07b6521d" class="">Es para usar números enteros</p><p id="10eb4392-0286-8138-8e99-d52c19dc92e5" class="">En un “Cin” si separas los números se guardan el el buffer del teclado y la siguiente variable tendrá el segundo número</p><h2 id="10eb4392-0286-81ab-bc79-d963e11db025" class="">float</h2><p id="10eb4392-0286-81de-b2c1-e0ce33b5846b" class="">Es para usar números decimales</p><p id="136b4392-0286-800f-ae6d-d041127fd6f8" class="">
</p><h1 id="136b4392-0286-800e-a9e6-d11450be6b90" class="">Constantes</h1><p id="136b4392-0286-806f-abb6-e2943f12f5af" class=""><code>const int Distancia = int(&#x27;a&#x27;) -int(&#x27;A&#x27;)</code> </p><p id="10eb4392-0286-81c8-9abc-f7639758ff5e" class="">
</p><hr id="10eb4392-0286-8124-afb3-e24c26c35c2e"/><p id="10eb4392-0286-81b8-893a-ff76c0afe71f" class="">
</p><h1 id="10eb4392-0286-81d6-bf22-f7f6403b194d" class="">Algoritmo</h1><figure class="block-color-blue_background callout" style="white-space:pre-wrap;display:flex" id="10eb4392-0286-8142-a5a2-e56540233a2a"><div style="width:100%"><blockquote id="10eb4392-0286-8119-913e-ec4979d662bd" class="">Siempre el algoritmo tiene que estar en dentro de:</blockquote><p id="10eb4392-0286-8120-a3c8-d43e534248a9" class=""> int main(){</p><p id="10eb4392-0286-8177-a10b-f5b830fec3bc" class="">
</p><p id="10eb4392-0286-8195-8962-e57814674f23" class="">}</p></div></figure><h2 id="10eb4392-0286-8185-ba8a-f14392d65f55" class="">Printf(”Hello world”);</h2><p id="10eb4392-0286-81bb-8af5-e8613b0a3bd9" class="">Sirve para que el programa escriba en la terminal “Hello world”</p><h2 id="10eb4392-0286-81bd-ae6a-c61a0f34a2ac" class="">Cout &lt;&lt; ”Hello world”;</h2><p id="10eb4392-0286-8185-81b1-e51f45ea1f0a" class="">Sirve para que en la terminal se escriba “Hello world” pero si hay una sucesión de Cout no salta linea.</p><h3 id="10eb4392-0286-816e-b450-ed2057546671" class="">Si pones \n dentro de las comillas es un salto de página :)</h3><h3 id="10eb4392-0286-817d-bf8c-f54b27626f06" class="">Endl</h3><p id="10eb4392-0286-81db-b1b8-de7ecea4791f" class="">Cuando en un “Cout” pones <strong>“endl”</strong> haces que ocurra salto de linea</p><h2 id="10eb4392-0286-8135-b5a6-dcbc9487e899" class="">Cin &gt;&gt;</h2><p id="10eb4392-0286-814a-94b9-e7a444a7af21" class="">Deja que escribas en la terminal para darle un valor a una variable.</p><h3 id="128b4392-0286-8041-bbee-c14763db38ad" class="">Recoger mierdas del buffer</h3><p id="128b4392-0286-8095-861c-d14056418d82" class=""><code>cin.get(c);</code> </p><h3 id="128b4392-0286-8069-a366-f432106e0aaa" class="">Limpiar el buffer</h3><p id="128b4392-0286-805b-a30d-df8f49c98704" class="">
</p><p id="10eb4392-0286-8195-81ed-fec513a9f71e" class="">
</p><hr id="10eb4392-0286-81a6-810b-d6e096c5767e"/><h1 id="10eb4392-0286-8110-947d-c1f3fa79d045" class="">Operadores</h1><h2 id="10eb4392-0286-81ab-853d-e55e350f1253" class="">Suma y Resta ( +,  -  )</h2><p id="10eb4392-0286-8142-82e5-f7f2064e47a2" class="">Si los números son enteros el resultado será entero, alguno es real será real el resultado.</p><h2 id="10eb4392-0286-8194-b1c0-d03be6a568b9" class="">Multiplicación ( * )</h2><p id="10eb4392-0286-81a2-bcdc-db226b10b325" class="">Si los números son enteros el resultado será entero, alguno es real será real el resultado.</p><h2 id="10eb4392-0286-8111-9a9b-ff4ac520ec18" class="">DIV ( / )</h2><p id="10eb4392-0286-8135-a6ca-e28f8b4e5877" class="">Devuelve el resultado de la división sin decimales de una división</p><h2 id="10eb4392-0286-812f-9930-cc2cdf949668" class="">MOD ( % )</h2><p id="10eb4392-0286-8136-8be7-e98c71e4fa89" class="">Devuelve el resto de la división</p><h2 id="10eb4392-0286-81c4-bac8-d549ec8512b6" class="">División normal ( / )</h2><p id="10eb4392-0286-81fd-ba6c-cb4684416d02" class="">Te devuelve números reales</p><p id="121b4392-0286-8020-9033-f723c50eb0c9" class="">
</p><h2 id="121b4392-0286-80ae-bf67-d8850344b8fe" class="">&lt;&gt; = ≤ ≥ ≠</h2><p id="121b4392-0286-80d2-9e0a-ff3d4f752f1b" class="">Devuelve booleanos es decir verdadero o falso</p><h2 id="121b4392-0286-8064-ae71-ee7ae4d4fa85" class="">Sucesor y Predecesor</h2><div id="121b4392-0286-807c-a39f-e97973de20bb" class="column-list"><div id="0da0e065-8247-40de-b2ee-c9b311e98512" style="width:50%" class="column"><h3 id="82f4c773-aa29-493c-a04d-d996ffbdc46a" class="">Sucesor (+1) </h3></div><div id="38e6d41d-9af6-44e9-8d5d-2d2f317fa7f0" style="width:50%" class="column"><h3 id="ff099765-a734-4496-91d6-ba59076a23d7" class="">Predecesor (-1)</h3></div></div><h2 id="121b4392-0286-800f-8d87-e57289155b43" class="">Operadores para booleanos</h2><h3 id="121b4392-0286-80b2-8282-d0fe4635a09f" class="">NO</h3><p id="121b4392-0286-80ce-889c-c719cdbb84fe" class="">Cambia verdadero por falso y viceversa</p><h3 id="121b4392-0286-805c-99cd-f6ef85f2c872" class="">Y</h3><p id="121b4392-0286-80c4-816d-fbdde1184669" class="">Es una multiplicación si pensamos que verdadero es 1 y falso es 0</p><h3 id="121b4392-0286-803d-a99c-eda5e2adc983" class="">O</h3><p id="121b4392-0286-80bd-ae26-c208ad581f6c" class="">Es una suma si pensamos que verdadero es 1 y falso es 0</p><h2 id="121b4392-0286-8017-b81f-d4d10bdb3222" class="">Operadores para caracteres</h2><h3 id="121b4392-0286-8086-9b6f-f5dc3b6cdb72" class="">&lt;&gt; = ≤ ≥ ≠</h3><div id="121b4392-0286-80c8-ae3a-de6da7d13ab2" class="column-list"><div id="79eec912-4524-4ab4-bb79-2e3b8b69e668" style="width:100%" class="column"><p id="56ebb3f0-a5ae-4700-b1a5-2a5a85a67b5d" class="">Siendo a 1, b2….</p></div><div id="17ddee43-fd1e-4a85-8e1d-b0bd2b7591ef" style="width:100%" class="column"><p id="f3a7b5dd-fa3f-44a3-9208-0f61b36987e8" class="">Te devuelve booleano</p></div></div><h3 id="121b4392-0286-805e-9de6-f39c22dba0cc" class="">Car</h3><p id="121b4392-0286-80b3-a721-d2f8c5a6bc8e" class="">Transforma de entero a carácter</p><h3 id="121b4392-0286-807c-bfe3-cf2f814cc69b" class="">Ord</h3><p id="121b4392-0286-802d-a58a-c55fcced74c2" class="">Transforma de carácter a entero</p><h3 id="121b4392-0286-809a-92a8-f87b8263c46b" class="">También se puede usar predecesor y sucesor</h3><p id="121b4392-0286-80a8-aaa5-e5b6186c3387" class="">
</p><hr id="121b4392-0286-80cd-9b3c-ef3c736daeba"/><h1 id="121b4392-0286-808a-86ef-edb24ded94c2" class="">Operadores complejos</h1><h3 id="10eb4392-0286-8195-934c-d20bcc1ffb5c" class="">Pow (elevar a algo)</h3><p id="10eb4392-0286-81db-85ab-c0fb175e027f" class="">Hay que poner al principio: <code>#include &lt;cmath&gt;</code></p><p id="10eb4392-0286-8102-8ec1-eafe38accdaa" class="">Despues pones:  <code>pow(base, a_lo_que_elevas);</code></p><p id="121b4392-0286-8043-8d17-d88ca082e443" class="">
</p><h2 id="121b4392-0286-8018-9e38-cda7bef2d726" class="">Sqr (elevar al cuadrado) </h2><p id="121b4392-0286-8002-93a2-f942cc142412" class="">Hay que poner al principio: <code>#include &lt;cmath&gt;</code></p><p id="121b4392-0286-80a2-aea0-d2a2f7d21df7" class="">Despues pones:  <code>sqr(base, a_lo_que_elevas);</code></p><p id="121b4392-0286-80f6-9eb5-eececb534dc6" class="">
</p><h2 id="121b4392-0286-8019-b295-cbb8be244099" class="">Sqrt (raiz cuadrada)</h2><p id="121b4392-0286-80e2-9a4e-c86a945c2a91" class="">Hay que poner al principio: <code>#include &lt;cmath&gt;</code></p><p id="121b4392-0286-8013-b921-c5330bb841f4" class="">Despues pones:  <code>sqrt(base, a_lo_que_elevas);</code></p><p id="10eb4392-0286-81db-9b76-d6fb09f43202" class="">
</p><p id="10eb4392-0286-8172-aa2e-c40ee522a80a" class="">
</p><hr id="10eb4392-0286-8125-83b9-c0ddb95adf9c"/><p id="10eb4392-0286-818f-bc3e-f7aea1ca5ff7" class="">
</p><h1 id="10eb4392-0286-81ea-85e9-c10aaf62de54" class="">Tablas</h1><p id="10eb4392-0286-81e5-b4c8-ee09269d5571" class="">…</p><p id="10eb4392-0286-81f7-8b6e-e8293b29b42b" class="">
</p><hr id="10eb4392-0286-81bb-b7a8-ddc312cbc626"/><p id="10eb4392-0286-8186-8f3e-de94e359394f" class="">
</p><h1 id="10eb4392-0286-81b4-aedf-c6bbb7e80901" class="">Registro </h1><p id="10eb4392-0286-811f-bc39-d2cad2106a17" class="">…</p><p id="10eb4392-0286-816b-a49b-d9d2251a7514" class="">
</p><hr id="10eb4392-0286-8157-8580-ecada01d0843"/><p id="10eb4392-0286-819e-ac46-dca1129b7415" class="">
</p><h1 id="10eb4392-0286-81e3-9c2b-d3a055b38b68" class="">Secuencias</h1><p id="10eb4392-0286-815c-b97a-ee8fe1b5e747" class="">…</p><p id="112b4392-0286-8013-a706-d49fc16eb3b7" class="">
</p><hr id="112b4392-0286-80ed-884e-fd3be34a1be6"/><p id="112b4392-0286-8097-a1ba-ce885073414d" class="">
</p><h1 id="112b4392-0286-8020-8128-c75dcc86c783" class="">Funciones</h1><p id="11ab4392-0286-80eb-a0fc-dd62bc095c91" class="">Hay variables de entrada y uno de salida</p><p id="11ab4392-0286-80c3-824f-c708859c879d" class="">Lo que quieres que salga es lo que va después del <code>return</code></p><p id="121b4392-0286-80bd-926a-ff45731cf258" class="">Las funciones pueden devolver solo una variable y no la devuelven de vuelta como tal, simplemente haces que se produzca una operación entonces si quieres guardarte el resultado de una función en una variable tendrás que poner: <code>max = Max2(500,200);</code></p><script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js" integrity="sha512-7Z9J3l1+EYfeaPKcGXu3MS/7T+w19WtKQY/n+xzmw4hZhJ9tyYmcUS+4QqAlzhicE5LAfMQSF3iFTK9bQdTxXg==" crossorigin="anonymous" referrerPolicy="no-referrer"></script><link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css" integrity="sha512-tN7Ec6zAFaVSG3TpNAKtk4DOHNpSwKHxxrsiw4GHKESGPs5njn/0sMCUMl2svV4wo4BK/rCP7juYz+zx+l6oeQ==" crossorigin="anonymous" referrerPolicy="no-referrer"/><pre id="121b4392-0286-807a-8af9-cf42d781f62d" class="code"><code class="language-C++">int Max2 (int a, int b)
{
int mayor;
if (a &gt; b) {
mayor = a; }
else {
mayor = b; }
return mayor;
}
cout &lt;&lt; Max2 (x,y);</code></pre><p id="112b4392-0286-805d-8421-daa7da128b27" class="">
</p><hr id="112b4392-0286-8082-9a4b-fec1e0a7237f"/><p id="112b4392-0286-80ef-815c-ffe5e999cff8" class="">
</p><h1 id="112b4392-0286-8021-a335-e46224797943" class="">Acciones</h1><p id="112b4392-0286-8039-94d8-ec695e4958a4" class="">Se representan con un <code>void &quot;nombre&quot;(){…      }</code></p><p id="11fb4392-0286-803d-a91e-df7a45c45d8a" class="">Se declara encima de main</p><p id="10eb4392-0286-814a-bd01-c0c067731efa" class="">Las variables en las acciones funcionan diferente hay unas de lectura y otras que se trasladan al exterior.</p><p id="11ab4392-0286-8054-9d06-f6b58f18ed9b" class="">Si pones <code>&amp;</code> puedes que hacer que sea de entrada y salida o solo entrada</p><p id="11ab4392-0286-8069-8835-d2f23c18657c" class="">Ahí declaras que cuando te pongan variables en ese orden se asignarán a las todas las b en el mismo orden</p><script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js" integrity="sha512-7Z9J3l1+EYfeaPKcGXu3MS/7T+w19WtKQY/n+xzmw4hZhJ9tyYmcUS+4QqAlzhicE5LAfMQSF3iFTK9bQdTxXg==" crossorigin="anonymous" referrerPolicy="no-referrer"></script><link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css" integrity="sha512-tN7Ec6zAFaVSG3TpNAKtk4DOHNpSwKHxxrsiw4GHKESGPs5njn/0sMCUMl2svV4wo4BK/rCP7juYz+zx+l6oeQ==" crossorigin="anonymous" referrerPolicy="no-referrer"/><pre id="11ab4392-0286-805c-b1ae-f03d9bae0357" class="code"><code class="language-C++">void BinDec (int b1, int b2, int b3, int b4, int &amp;dec)
{
dec = b1*1 + b2*2 + b3*4 + b4*8;
}
BinDec (a1, a2, a1, a2, decimal1);</code></pre><p id="11ab4392-0286-8070-9f08-f3337884d48c" class=""> b1*a1 + b2*a2 + b3*74 + b4*8;</p><p id="11ab4392-0286-80d5-a0f7-c7f72177db68" class="">
</p><hr id="11ab4392-0286-80d2-ab44-e50bc020d2ff"/><p id="11ab4392-0286-80c7-92d3-f18403e2a148" class="">
</p><h1 id="11ab4392-0286-808c-b9a3-cb19bf3a34bb" class="">Tipos de productos</h1><p id="11ab4392-0286-801d-9a93-ccecae38c466" class="">Es una variable que dentro de ella hay varias, en este caso hemos hecho la variable punto que tiene abcisas  y ordenadas, definimos como se va a llamar este tipo de productos y como lo vamos a llamar (con <code>P</code>) </p><script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js" integrity="sha512-7Z9J3l1+EYfeaPKcGXu3MS/7T+w19WtKQY/n+xzmw4hZhJ9tyYmcUS+4QqAlzhicE5LAfMQSF3iFTK9bQdTxXg==" crossorigin="anonymous" referrerPolicy="no-referrer"></script><link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css" integrity="sha512-tN7Ec6zAFaVSG3TpNAKtk4DOHNpSwKHxxrsiw4GHKESGPs5njn/0sMCUMl2svV4wo4BK/rCP7juYz+zx+l6oeQ==" crossorigin="anonymous" referrerPolicy="no-referrer"/><pre id="11ab4392-0286-80c4-8efd-d5fc26b76292" class="code"><code class="language-C++">struct Punto {
float abscisa, ordenada;
};
//hasta aqui has dicho que hay un nuevo tipo de variable llamado punto que contsta de dos
//ahora para usarla tienes que hacer una variable o las que quieras 
Punto p;
…
cout &lt;&lt; p.ordenada &lt;&lt; endl;</code></pre><p id="11fb4392-0286-80d4-8538-e0207a628c0a" class="">
</p><hr id="10eb4392-0286-8193-abf5-fa31d348b099"/><p id="10eb4392-0286-811f-adc9-f35a4698d939" class="">
</p><h1 id="10eb4392-0286-81f2-a873-f3f4417c05ae" class="">Análisis de casos </h1><details open=""><summary style="font-weight:600;font-size:1.5em;line-height:1.3;margin:0">Operadores lógicos</summary><div class="indented"><h3 id="10eb4392-0286-81a7-922c-ead05389e84a" class="">Y = “&amp;&amp;”</h3><h3 id="10eb4392-0286-819b-b980-cfd437d78d42" class="">Igual = “==”</h3><h3 id="10eb4392-0286-8157-8c07-e1c788461e1f" class="">O = “||”</h3></div></details><h2 id="10eb4392-0286-8189-925a-eafa96b1c389" class="">If</h2><p id="10eb4392-0286-8158-be44-c32386213239" class="">Sirve para que cuando pase algo la maquina haga otra cosa</p><script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js" integrity="sha512-7Z9J3l1+EYfeaPKcGXu3MS/7T+w19WtKQY/n+xzmw4hZhJ9tyYmcUS+4QqAlzhicE5LAfMQSF3iFTK9bQdTxXg==" crossorigin="anonymous" referrerPolicy="no-referrer"></script><link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css" integrity="sha512-tN7Ec6zAFaVSG3TpNAKtk4DOHNpSwKHxxrsiw4GHKESGPs5njn/0sMCUMl2svV4wo4BK/rCP7juYz+zx+l6oeQ==" crossorigin="anonymous" referrerPolicy="no-referrer"/><pre id="10eb4392-0286-8171-8e2e-fb6225cd359f" class="code"><code class="language-C++">if (cond) {
S
}</code></pre><h2 id="10eb4392-0286-81d8-90a7-e411d171b947" class="">Else</h2><p id="10eb4392-0286-81ac-8852-ef22ddccbe78" class="">Es complementario del if, cuando no se produce el if se reproduce el <code>else</code></p><script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js" integrity="sha512-7Z9J3l1+EYfeaPKcGXu3MS/7T+w19WtKQY/n+xzmw4hZhJ9tyYmcUS+4QqAlzhicE5LAfMQSF3iFTK9bQdTxXg==" crossorigin="anonymous" referrerPolicy="no-referrer"></script><link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css" integrity="sha512-tN7Ec6zAFaVSG3TpNAKtk4DOHNpSwKHxxrsiw4GHKESGPs5njn/0sMCUMl2svV4wo4BK/rCP7juYz+zx+l6oeQ==" crossorigin="anonymous" referrerPolicy="no-referrer"/><pre id="10eb4392-0286-8169-86a4-fbb5ebed763b" class="code"><code class="language-C++">if (cond) {
S	
}	 else {
R	
}	</code></pre><h2 id="10eb4392-0286-8163-86ab-f8d045a9b1ad" class="">Switch</h2><p id="10eb4392-0286-819b-acb5-e531860af5d9" class="">El switch sirve para elegir entre muchos casos</p><p id="10eb4392-0286-8185-8c7e-cb952fafa495" class="">No se puede usar operadores lógicos</p><p id="10eb4392-0286-8187-b25d-e6c8e745cf8f" class="">El default es muy importante pues es lo que hará si no le damos ningún input que requiera para darnos algo en especifico</p><p id="10eb4392-0286-815e-b4e5-f0f232bdb618" class=""><span style="border-bottom:0.05em solid">Si no pones el break se ejecutarán todos los de debajo del caso que tu elijas</span>, es decir si digo “B” me dirá lo que dice del B del C y el dafault</p><script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js" integrity="sha512-7Z9J3l1+EYfeaPKcGXu3MS/7T+w19WtKQY/n+xzmw4hZhJ9tyYmcUS+4QqAlzhicE5LAfMQSF3iFTK9bQdTxXg==" crossorigin="anonymous" referrerPolicy="no-referrer"></script><link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css" integrity="sha512-tN7Ec6zAFaVSG3TpNAKtk4DOHNpSwKHxxrsiw4GHKESGPs5njn/0sMCUMl2svV4wo4BK/rCP7juYz+zx+l6oeQ==" crossorigin="anonymous" referrerPolicy="no-referrer"/><pre id="10eb4392-0286-81ad-aa58-ff279784c472" class="code"><code class="language-C++">switch (PermisoConducir) {
case &#x27;A&#x27;:
cout &lt;&lt; &quot;Motocicletas y triciclos de motor&quot;;
break;
case &#x27;B&#x27; :
cout &lt;&lt; &quot;Automóviles masa máxima autorizada &lt;= 3500 kg&quot;;
break;
case &#x27;C&#x27; :
cout &lt;&lt; &quot; Automóviles masa máxima autorizada &gt; 3500 kg &quot;;
break;
default :
cout &lt;&lt; &quot;No contemplado&quot;;
break;
}</code></pre><p id="10eb4392-0286-81c2-b5a8-fcbb1c788993" class="">
</p><p id="10eb4392-0286-811c-9610-c4172cb667d4" class="">
</p><hr id="10eb4392-0286-81a4-a65d-fed531e1eff5"/><p id="10eb4392-0286-81a7-8e9f-f96cd322d1ba" class="">
</p><h1 id="10eb4392-0286-810e-be1b-d9bfb5a37de5" class="">Bucles</h1><h2 id="11fb4392-0286-8083-9e28-e528f0689f4a" class="">Break</h2><p id="11fb4392-0286-8043-a96e-e26e576be591" class="">Se usa para para un bucle</p><p id="11fb4392-0286-80b7-b82a-f1e7a895c21e" class="">Se puede usar </p><p id="11fb4392-0286-805f-90be-c473dd1e6783" class=""><code>If (cond) break;</code></p><p id="11fb4392-0286-806a-9ff7-ef764cfda641" class="">o</p><p id="11fb4392-0286-8057-bdab-cb211bcfb142" class=""><code>Break;</code></p><h2 id="11fb4392-0286-802a-a37d-d66784d34837" class="">While</h2><p id="11fb4392-0286-80b5-aaa9-d138b2063602" class="">Se produce mientras la condición se cumpla, la condición se actualiza al principio, no al final</p><script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js" integrity="sha512-7Z9J3l1+EYfeaPKcGXu3MS/7T+w19WtKQY/n+xzmw4hZhJ9tyYmcUS+4QqAlzhicE5LAfMQSF3iFTK9bQdTxXg==" crossorigin="anonymous" referrerPolicy="no-referrer"></script><link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css" integrity="sha512-tN7Ec6zAFaVSG3TpNAKtk4DOHNpSwKHxxrsiw4GHKESGPs5njn/0sMCUMl2svV4wo4BK/rCP7juYz+zx+l6oeQ==" crossorigin="anonymous" referrerPolicy="no-referrer"/><pre id="11fb4392-0286-8091-955d-d2ff021aed49" class="code"><code class="language-C++">while (cond) {
S;
}</code></pre><h2 id="10eb4392-0286-81a4-aa8e-ed7e81a9df63" class="">Do while</h2><p id="10eb4392-0286-8155-a846-d5ad6ad2d3cd" class="">Hacer mientras:  la comprobación se hace al final</p><script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js" integrity="sha512-7Z9J3l1+EYfeaPKcGXu3MS/7T+w19WtKQY/n+xzmw4hZhJ9tyYmcUS+4QqAlzhicE5LAfMQSF3iFTK9bQdTxXg==" crossorigin="anonymous" referrerPolicy="no-referrer"></script><link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css" integrity="sha512-tN7Ec6zAFaVSG3TpNAKtk4DOHNpSwKHxxrsiw4GHKESGPs5njn/0sMCUMl2svV4wo4BK/rCP7juYz+zx+l6oeQ==" crossorigin="anonymous" referrerPolicy="no-referrer"/><pre id="10eb4392-0286-81e4-8ee6-e482d6760b52" class="code"><code class="language-C++">int numero;
do
{
    cout &lt;&lt;  &quot;Ingrese un numero &quot;;
    cin &gt;&gt; numero;
}
while(numero &lt;= 100);</code></pre><p id="11fb4392-0286-80e5-9497-c6e5ca1efea0" class="">
</p><h2 id="10eb4392-0286-81d9-bdad-c9bb6762ab44" class="">for</h2><p id="128b4392-0286-8002-96a8-d634ef761a55" class="">Esto es realmente un while donde al principio decimos cuanto vale i, despues le decimos que mientras i sea menos o igual que b se siga ejecutando y por ultimo le decimos cuanto va a ir subiedo que va a ser uno por uno</p><script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js" integrity="sha512-7Z9J3l1+EYfeaPKcGXu3MS/7T+w19WtKQY/n+xzmw4hZhJ9tyYmcUS+4QqAlzhicE5LAfMQSF3iFTK9bQdTxXg==" crossorigin="anonymous" referrerPolicy="no-referrer"></script><link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css" integrity="sha512-tN7Ec6zAFaVSG3TpNAKtk4DOHNpSwKHxxrsiw4GHKESGPs5njn/0sMCUMl2svV4wo4BK/rCP7juYz+zx+l6oeQ==" crossorigin="anonymous" referrerPolicy="no-referrer"/><pre id="128b4392-0286-80fe-a174-fc41f51b1df7" class="code"><code class="language-C++">for (i = a; i&lt;=b; i++){
	S;
}</code></pre><p id="10eb4392-0286-81a0-afec-c514aff3566f" class="">Esto es lo mismo que:</p><script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js" integrity="sha512-7Z9J3l1+EYfeaPKcGXu3MS/7T+w19WtKQY/n+xzmw4hZhJ9tyYmcUS+4QqAlzhicE5LAfMQSF3iFTK9bQdTxXg==" crossorigin="anonymous" referrerPolicy="no-referrer"></script><link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css" integrity="sha512-tN7Ec6zAFaVSG3TpNAKtk4DOHNpSwKHxxrsiw4GHKESGPs5njn/0sMCUMl2svV4wo4BK/rCP7juYz+zx+l6oeQ==" crossorigin="anonymous" referrerPolicy="no-referrer"/><pre id="128b4392-0286-80f0-adde-f200b5bd81d5" class="code"><code class="language-C++">i=a;
while (i&lt;= b){
S;
i++;
}</code></pre><p id="10eb4392-0286-8155-a764-f78bcf3f2999" class="">
</p><p id="10eb4392-0286-8115-8e70-f0733173b8dd" class="">
</p><p id="10eb4392-0286-81ba-aaad-c4cde13a81f9" class="">
</p><hr id="10eb4392-0286-8112-88ff-f8cc6999390f"/><p id="10eb4392-0286-8156-9581-cd01988c1826" class="">
</p><p id="10eb4392-0286-816e-bebb-fc5b60dd6998" class="">
</p></div></article><span class="sans" style="font-size:14px;padding-top:2em"></span></body></html>
