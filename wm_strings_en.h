/**
 * wm_strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_


#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

// strings files must include a consts file!
#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "en-US"; // i18n lang code

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='en'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
//const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";

const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title='LOGO' src='data:image/png;base64,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'/><h1>{v}</h1><h3>DTWay</h3>";


const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configure WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configure WiFi (No scan)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Info</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Setup</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Close</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Restart</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Exit</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Erase</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Update</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

//const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[2] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'><input type='checkbox' onclick='f()'> Show Password";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refresh</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Saving Credentials<br/>Trying to connect ESP to network.<br />If it fails reconnect to AP to try again</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Saved<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi config</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Update</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Back</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Not connected</strong> to {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Authentication failure"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>AP not found";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Could not connect"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>No AP set</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
"input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
"button.D{background-color:#dc3630}"
"button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
":disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Available pages</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Menu page.</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Parameter page</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Information page</td></tr>"
 "<tr><td><a href='/u'>/u</a></td>"
 "<td>OTA Update</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Close the captiveportal popup, config portal will remain active</td></tr>"
 "<tr><td>/exit</td>"
 "<td>Exit Config portal, config portal will close</td></tr>"
 "<tr><td>/restart</td>"
 "<td>Reboot the device</td></tr>"
 "<tr><td>/erase</td>"
 "<td>Erase WiFi configuration and reboot device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</table>"
 "<p/>DTWay 2023."; // "<p/>Github <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>."
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Upload new firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* May not function inside captive portal, open in browser http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Update failed!</strong><Br/>Reboot device and try again</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Update successful.  </strong> <br/> Device rebooting now...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip rev</dt><dd>{1}</dd>";
  	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  	const char HTTP_INFO_aphost[]     PROGMEM = "<dt>Access point hostname</dt><dd>{1}</dd>";
    const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd>";
    const char HTTP_INFO_hall[]       PROGMEM = "<dt>Hall</dt><dd>{1}</dd>";
#else
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot version</dt><dd>{1}</dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real flash size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free heap</dt><dd>{1} bytes available</dd>";
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} mins {2} secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>Access point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[]     PROGMEM = "<dt>WiFiManager</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[]    PROGMEM = "<dt>Build date</dt><dd>{1}</dd>";

const char S_brand[]              PROGMEM = "DTWay";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credentials saved";
const char S_titlewifisettings[]  PROGMEM = "Settings saved";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An error occured";
const char S_notfound[]           PROGMEM = "File not found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";


// softap ssid default prefix
#ifdef ESP8266
    const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
    const char S_ssidpre[]        PROGMEM = "ESP32";
#else
    const char S_ssidpre[]        PROGMEM = "WM";
#endif

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

#endif
