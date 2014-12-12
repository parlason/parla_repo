<?php
/**
 * @file
 * user_created_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function user_created_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Sharing buttons situated at the bottom of a post, Danish';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'bottom_sharing_buttons_danish';
  $fe_block_boxes->body = '<div class="bottom-sharing-buttons">
<p class="sharing-text">Del gerne indholdet med andre:</p>
<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_default_style addthis_32x32_style">
<a class="addthis_button_preferred_1"></a>
<a class="addthis_button_preferred_2"></a>
<a class="addthis_button_preferred_3"></a>
<a class="addthis_button_preferred_4"></a>
<a class="addthis_button_compact"></a>
<a class="addthis_counter addthis_bubble_style"></a>
</div>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":true};addthis_config.data_track_addressbar = false;</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-53577e085ae62ce6"></script>
<!-- AddThis Button END -->
</div>';

  $export['bottom_sharing_buttons_danish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Sharing buttons situated at the bottom of a post, English';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'bottom_sharing_buttons_english';
  $fe_block_boxes->body = '<div class="bottom-sharing-buttons">
<p class="sharing-text">Please, feel free to share the content with friends or colleagues:</p>
<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_default_style addthis_32x32_style">
<a class="addthis_button_preferred_1"></a>
<a class="addthis_button_preferred_2"></a>
<a class="addthis_button_preferred_3"></a>
<a class="addthis_button_preferred_4"></a>
<a class="addthis_button_compact"></a>
<a class="addthis_counter addthis_bubble_style"></a>
</div>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":true}; addthis_config.data_track_addressbar = false;</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-53577e085ae62ce6"></script>
<!-- AddThis Button END -->
</div>';

  $export['bottom_sharing_buttons_english'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Sharing buttons situated at the bottom of a post, Spanish';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'bottom_sharing_buttons_spanish';
  $fe_block_boxes->body = '<div class="bottom-sharing-buttons">
<p class="sharing-text">Te invitamos a compartir el contenido:</p>
<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_default_style addthis_32x32_style">
<a class="addthis_button_preferred_1"></a>
<a class="addthis_button_preferred_2"></a>
<a class="addthis_button_preferred_3"></a>
<a class="addthis_button_preferred_4"></a>
<a class="addthis_button_compact"></a>
<a class="addthis_counter addthis_bubble_style"></a>
</div>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":true};addthis_config.data_track_addressbar = false;</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-53577e085ae62ce6"></script>
<!-- AddThis Button END -->
</div>';

  $export['bottom_sharing_buttons_spanish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Call us block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'call_us';
  $fe_block_boxes->body = '<p>Looking for a seducing concert experience?<br>Call us: +45 26 96 19 84, <br>or send us an email: <a href="mailto:info@musica.nu" style="line-height: 1.538em;">info @ musica.nu</a></p>';

  $export['call_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Concert theme explanation, Spanish';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'concert_theme_exp_spanish';
  $fe_block_boxes->body = '<p class="text-header" id="in-english">Por favor, elige los conciertos cliqueando en la foto pequeña del índice. </p>
[collapse collapsed title="Más acerca de los conciertos temáticos ..."]<div id="collapse-text-background"></div><div id="collapse-text-text"><p>Via Artis Konsort pretende presentar los programas de música antigua en un marco concertista relevante y comtemporáneo, estructurando los programas de concierto por <em>temas</em>. Un tema puede ser de un género musical específico, o puede tener una demarcación sociológica además de musical.<br />Los programas concretos se están desarrollando constantemente y dos conciertos son raramente idénticos, aunque lleven el mismo título, sin embargo el método de preparar, ensayar y presentar finalmente una serie de conciertos dentro del mismo marco temático, nos brinde al ensamble la oportunidad de profundizar, tanto en el género musical en cuestión como en el mundo que rodea la música..</p></div>[/collapse]';

  $export['concert_theme_exp_spanish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Concert theme explanation, Danish';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'concert_theme_explanation_danish';
  $fe_block_boxes->body = '<p class="text-header">Vælg de enkelte tema-koncerter ved at klikke på det lille indeks foto.</p>
[collapse collapsed title="Mere om koncerttemaer ..."]<div id="collapse-text-background"></div><div id="collapse-text-text"><p>Via Artis ønsker at præsentere den <em>tidlige musik</em> i en relevant og nutidig koncert-sammenhæng - og med det for øje sammensætter vi ofte vores koncertprogrammer efter <em>tema</em>. Et tema kan være genre-bestemt, eller det kan have en mere musik-sociologisk afgrænsning. <br />De konkrete koncert-programmer udvikler sig hele tiden indenfor de valgte tema-rammer, og to koncerter er sjældent ens, selvom de bærer samme navn. Men ved at forberede, og efterfølgende spille en lang række koncerter indenfor samme tema-område, har vi mulighed for at gå mere i dybden, både med en given musikalsk genre, og den verden der omgiver musikken.</p></div>[/collapse]';

  $export['concert_theme_explanation_danish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Concert theme explanation, English';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'concert_theme_explanation_nglish';
  $fe_block_boxes->body = '<p class="text-header" id="in-english">Please select the individual concert theme by clicking on the small index photo.</p>
[collapse collapsed title="More about concert themes ..."]<div id="collapse-text-background"></div><div id="collapse-text-text"><p>Via Artis Konsort aim to present the Early Music programs in a relevant and contemporary concert form by assembling our concert programs by <em>theme</em>.<br />A theme can be genre-specific, or it may have a more music-sociological demarcation. <br />The specific concert programs are evolving constantly within the selected theme-frames, and two concerts are rarely the same, although they bear the same name. But by preparing, and subsequently playing a longer series of concerts within the same thematic area, the ensemble is given the opportunity to go more into depth, both with a particular musical genre, and the world that surrounds the music.</p></div>[/collapse]';

  $export['concert_theme_explanation_nglish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Andre links til Via Artis sider';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'other_links_danish';
  $fe_block_boxes->body = '<div id="block-menu-title"><h2 class="block-title">Via Artis links</h2></div><div id="block-menu-elements"><p id="second-sidebar-menu">
<a title="Via Artis Konsort tema-koncerter" href="http://<?php echo $_SERVER[\'SERVER_NAME\'] . "/da/concert-theme"; ?>">Temakoncerter</a><br />
<a title="Via Artis Konsort koncertkalendar" href="http://<?php echo $_SERVER[\'SERVER_NAME\'] . "/da/calendar"; ?>" >Koncertkalender</a><br />
<a title="PARLA son online salg" href="http://shop.parla.org" target="_blank">CD\'er og downloads</a><br />
<a title="Via Artis videokanal" href="http://www.youtube.com/viaartiskonsort" target="_blank">Videokanal</a><br />
<a title="Via Artis Facebookside" href="http://www.facebook.com/viaartiskonsort" target="_blank">Facebookside</a><br />
<a title="Early World Music" href="https://www.facebook.com/pages/Early-World-Music/135118829865142?ref=ts&amp;fref=ts" target="_blank">Early World Music</a><br />
<a title="Via Artis Konsort interesante links" href="http://<?php echo $_SERVER[\'SERVER_NAME\'] . "/da/links-of-interest"; ?>">Interesante links</a><br />';

  $export['other_links_danish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Other links to Via Artis pages';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'other_links_english';
  $fe_block_boxes->body = '<div id="block-menu-title"><h2 class="block-title">Via Artis links</h2></div><div id="block-menu-elements"><p id="second-sidebar-menu">
<a title="Read about the different Via Artis concert programs" href="http://<?php echo $_SERVER[\'SERVER_NAME\'] . "/concert-theme"; ?>">Thematic programs</a><br />
<a title="Via Artis Konsort concert calendar" href="http://<?php echo $_SERVER[\'SERVER_NAME\'] . "/calendar"; ?>">Concert calendar</a><br />
<a title="PARLA son online sale" href="http://shop.parla.org" target="_blank">CD\'s and downloads</a><br />
<a title="Via Artis video channel" href="http://www.youtube.com/viaartiskonsort" target="_blank">Video channel</a><br />
<a title="Via artis Konsort Facebook page" href="http://www.facebook.com/viaartiskonsort" target="_blank">Facebook page</a><br />
<a title="Early World Music" href="https://www.facebook.com/pages/Early-World-Music/135118829865142?ref=ts&amp;fref=ts" target="_blank">Early World Music</a><br />
<a title="Via Artis links to sites of interest" href="http://<?php echo $_SERVER[\'SERVER_NAME\'] . "/links-of-interest"; ?>">Other links of interest </a><br />';

  $export['other_links_english'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Otros enlaces a las paginas de Via Artis';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'other_links_spanish';
  $fe_block_boxes->body = '<div id="block-menu-title"><h2 class="block-title">Via Artis links</h2></div><div id="block-menu-elements"><p id="second-sidebar-menu">
<a title="Los programas temáticos de Via Artis" href="http://<?php echo $_SERVER[\'SERVER_NAME\'] . "/es/concert-theme"; ?>">Conciertos temáticos</a><br />
<a title="Via Artis Konsort calendario de conciertos" href="http://<?php echo $_SERVER[\'SERVER_NAME\']  . "/es/calendar" ?>">Calendario</a><br />
<a title="PARLA son online salg" href="http://shop.parla.org" target="_blank">CDs y bajadas</a><br />
<a title="Via Artis videokanal" href="http://www.youtube.com/viaartiskonsort" target="_blank">Canal de video</a><br />
<a title="Via Artis Facebookside" href="http://www.facebook.com/viaartiskonsort" target="_blank">Página Facebook</a><br />
<a title="Early World Music" href="https://www.facebook.com/pages/Early-World-Music/135118829865142?ref=ts&amp;fref=ts" target="_blank">Early World Music</a><br />
<a title="Los enlaces interesantes de Via Artis" href="http://<?php echo $_SERVER[\'SERVER_NAME\'] . "/es/links-of-interest"; ?>">Otros enlaces</a><br />';

  $export['other_links_spanish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Sharing buttons';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'sharing_buttons';
  $fe_block_boxes->body = '<div class="sharing-buttons">
<!-- AddThis Smart Layers BEGIN -->
<!-- Go to http://www.addthis.com/get/smart-layers to customize -->
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-53577e085ae62ce6"></script>
<script type="text/javascript">
  addthis.layers({
    \'theme\' : \'transparent\',
    \'share\' : {
      \'position\' : \'left\',
      \'numPreferredServices\' : 5
    }   
  });
</script>
<!-- AddThis Smart Layers END -->
</div>';

  $export['sharing_buttons'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'A drawing of a snake';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'snake_divider';
  $fe_block_boxes->body = '<p>[[{"type":"media","view_mode":"media_large","fid":"64","attributes":{"alt":"","class":"media-image","height":"65","width":"343"}}]]</p>';

  $export['snake_divider'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'A drawing of a snake, smaller';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'snake_divider_smaller';
  $fe_block_boxes->body = '<p>[[{"type":"media","view_mode":"media_original","fid":"65","attributes":{"alt":"","class":"media-image","height":"94","width":"500"}}]]</p>';

  $export['snake_divider_smaller'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Subscription block, Danish';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'subscription_block_danish';
  $fe_block_boxes->body = '<form action="http://laniche.createsend.com/t/r/s/dtjdlk/" method="post" id="subForm">
<div id="subscription-block">
<div id="subscription-text">
<p id="subscription-header">Bliv opdateret!</p><p id="sign-up">Få besked om gratis videoer, musik, og andre nyheder fra Via&nbsp;Artis&nbsp;Konsort :</p>
</div>
<div id="subscription-form">
<input type="text" name="cm-name" id="name" placeholder=" Skriv dit navn her" /><br />
<input type="text" name="cm-dtjdlk-dtjdlk" id="dtjdlk-dtjdlk" placeholder=" ... og din email" /><br />
<p id="for-organizers-text">Til arrangører:</p><p id="stay-updated">Vær opdateret omkring nye koncertprogrammer, spilleperioder og specielle tilbud (Frekvens: 1-2 gange årligt)</p>
<div id="check-box">
<input type="checkbox" name="cm-ol-iyjdik" id="Koncertarrangører,dansk" /><label id="label-select" for="Koncertarrangører,dansk">Koncertarrangører, dansk</label><input id="submit-form" type="submit" value="Tilmeld!" />
</div>
</div>
</div>
</form>';

  $export['subscription_block_danish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Subscription block';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'subscription_block_english';
  $fe_block_boxes->body = '<div id="subscription-block">
<div id="subscription-text">
<p id="subscription-header">Keep up to date!</p><p id="sign-up">Sign up for new free videos, audio and other relevant information:</p>
</div>
<div id="subscription-form">
<form action="http://laniche.createsend.com/t/r/s/jhtjmt/" method="post" id="subForm">
<input type="text" name="cm-name" id="name" placeholder=" Please enter your name" /><br />
<input type="text" name="cm-jhtjmt-jhtjmt" id="jhtjmt-jhtjmt" placeholder=" Please enter your email" /><br />
<select name="cm-fo-yhkhujl" id="country">
<option value="3800931">Please select country</option>
<option value="3800931">Afghanistan</option>
<option value="3800932">Albania</option>
<option value="3800933">Algeria</option>
<option value="3800934">American Samoa</option>
<option value="3800935">Andorra</option>
<option value="3800936">Angola</option>
<option value="3800937">Anguilla</option>
<option value="3800938">Antigua & Barbuda</option>
<option value="3800939">Argentina</option>
<option value="3800940">Armenia</option>
<option value="3800941">Aruba</option>
<option value="3800942">Australia</option>
<option value="3800943">Austria</option>
<option value="3800944">Azerbaijan</option>
<option value="3800945">Azores</option>
<option value="3800946">Bahamas</option>
<option value="3800947">Bahrain</option>
<option value="3800948">Bangladesh</option>
<option value="3800949">Barbados</option>
<option value="3800950">Belarus</option>
<option value="3800951">Belgium</option>
<option value="3800952">Belize</option>
<option value="3800953">Benin</option>
<option value="3800954">Bermuda</option>
<option value="3800955">Bhutan</option>
<option value="3800956">Bolivia</option>
<option value="3800957">Bonaire</option>
<option value="3800958">Bosnia & Herzegovina</option>
<option value="3800959">Botswana</option>
<option value="3800960">Brazil</option>
<option value="3800961">British Indian Ocean Ter</option>
<option value="3800962">Brunei</option>
<option value="3800963">Bulgaria</option>
<option value="3800964">Burkina Faso</option>
<option value="3800965">Burundi</option>
<option value="3800966">Cambodia</option>
<option value="3800967">Cameroon</option>
<option value="3800968">Canada</option>
<option value="3800969">Canary Islands</option>
<option value="3800970">Cape Verde</option>
<option value="3800971">Cayman Islands</option>
<option value="3800972">Central African Republic</option>
<option value="3800973">Chad</option>
<option value="3800974">Channel Islands</option>
<option value="3800975">Chile</option>
<option value="3800976">China</option>
<option value="3800977">Christmas Island</option>
<option value="3800978">Cocos Island</option>
<option value="3800979">Colombia</option>
<option value="3800980">Comoros</option>
<option value="3800981">Congo</option>
<option value="3800982">Congo Democratic Rep</option>
<option value="3800983">Cook Islands</option>
<option value="3800984">Costa Rica</option>
<option value="3800985">Cote D\'Ivoire</option>
<option value="3800986">Croatia</option>
<option value="3800987">Cuba</option>
<option value="3800988">Curacao</option>
<option value="3800989">Cyprus</option>
<option value="3800990">Czech Republic</option>
<option value="3800991">Denmark</option>
<option value="3800992">Djibouti</option>
<option value="3800993">Dominica</option>
<option value="3800994">Dominican Republic</option>
<option value="3800995">East Timor</option>
<option value="3800996">Ecuador</option>
<option value="3800997">Egypt</option>
<option value="3800998">El Salvador</option>
<option value="3800999">Equatorial Guinea</option>
<option value="3801000">Eritrea</option>
<option value="3801001">Estonia</option>
<option value="3801002">Ethiopia</option>
<option value="3801003">Falkland Islands</option>
<option value="3801004">Faroe Islands</option>
<option value="3801005">Fiji</option>
<option value="3801006">Finland</option>
<option value="3801007">France</option>
<option value="3801008">French Guiana</option>
<option value="3801009">French Polynesia</option>
<option value="3801010">French Southern Ter</option>
<option value="3801011">Gabon</option>
<option value="3801012">Gambia</option>
<option value="3801013">Georgia</option>
<option value="3801014">Germany</option>
<option value="3801015">Ghana</option>
<option value="3801016">Gibraltar</option>
<option value="3801017">Great Britain</option>
<option value="3801018">Greece</option>
<option value="3801019">Greenland</option>
<option value="3801020">Grenada</option>
<option value="3801021">Guadeloupe</option>
<option value="3801022">Guam</option>
<option value="3801023">Guatemala</option>
<option value="3801024">Guernsey</option>
<option value="3801025">Guinea</option>
<option value="3801026">Guinea-Bissau</option>
<option value="3801027">Guyana</option>
<option value="3801028">Haiti</option>
<option value="3801029">Honduras</option>
<option value="3801030">Hong Kong</option>
<option value="3801031">Hungary</option>
<option value="3801032">Iceland</option>
<option value="3801033">India</option>
<option value="3801034">Indonesia</option>
<option value="3801035">Iran</option>
<option value="3801036">Iraq</option>
<option value="3801037">Ireland</option>
<option value="3801038">Isle of Man</option>
<option value="3801039">Israel</option>
<option value="3801040">Italy</option>
<option value="3801041">Jamaica</option>
<option value="3801042">Japan</option>
<option value="3801043">Jersey</option>
<option value="3801044">Jordan</option>
<option value="3801045">Kazakhstan</option>
<option value="3801046">Kenya</option>
<option value="3801047">Kiribati</option>
<option value="3801048">Korea North</option>
<option value="3801049">Korea South</option>
<option value="3801050">Kuwait</option>
<option value="3801051">Kyrgyzstan</option>
<option value="3801052">Laos</option>
<option value="3801053">Latvia</option>
<option value="3801054">Lebanon</option>
<option value="3801055">Lesotho</option>
<option value="3801056">Liberia</option>
<option value="3801057">Libya</option>
<option value="3801058">Liechtenstein</option>
<option value="3801059">Lithuania</option>
<option value="3801060">Luxembourg</option>
<option value="3801061">Macau</option>
<option value="3801062">Macedonia</option>
<option value="3801063">Madagascar</option>
<option value="3801064">Malawi</option>
<option value="3801065">Malaysia</option>
<option value="3801066">Maldives</option>
<option value="3801067">Mali</option>
<option value="3801068">Malta</option>
<option value="3801069">Marshall Islands</option>
<option value="3801070">Martinique</option>
<option value="3801071">Mauritania</option>
<option value="3801072">Mauritius</option>
<option value="3801073">Mayotte</option>
<option value="3801074">Mexico</option>
<option value="3801075">Midway Islands</option>
<option value="3801076">Moldova</option>
<option value="3801077">Monaco</option>
<option value="3801078">Mongolia</option>
<option value="3801079">Montenegro</option>
<option value="3801080">Montserrat</option>
<option value="3801081">Morocco</option>
<option value="3801082">Mozambique</option>
<option value="3801083">Myanmar</option>
<option value="3801084">Namibia</option>
<option value="3801085">Nauru</option>
<option value="3801086">Nepal</option>
<option value="3801087">Netherland Antilles</option>
<option value="3801088">Netherlands</option>
<option value="3801089">Nevis</option>
<option value="3801090">New Caledonia</option>
<option value="3801091">New Zealand</option>
<option value="3801092">Nicaragua</option>
<option value="3801093">Niger</option>
<option value="3801094">Nigeria</option>
<option value="3801095">Niue</option>
<option value="3801096">Norfolk Island</option>
<option value="3801097">Norway</option>
<option value="3801098">Oman</option>
<option value="3801099">Pakistan</option>
<option value="3801100">Palau Island</option>
<option value="3801101">Palestine</option>
<option value="3801102">Panama</option>
<option value="3801103">Papua New Guinea</option>
<option value="3801104">Paraguay</option>
<option value="3801105">Peru</option>
<option value="3801106">Philippines</option>
<option value="3801107">Pitcairn Island</option>
<option value="3801108">Poland</option>
<option value="3801109">Portugal</option>
<option value="3801110">Puerto Rico</option>
<option value="3801111">Qatar</option>
<option value="3801112">Reunion</option>
<option value="3801113">Romania</option>
<option value="3801114">Russia</option>
<option value="3801115">Rwanda</option>
<option value="3801116">Saipan</option>
<option value="3801117">Samoa</option>
<option value="3801118">Samoa American</option>
<option value="3801119">San Marino</option>
<option value="3801120">Sao Tome & Principe</option>
<option value="3801121">Saudi Arabia</option>
<option value="3801122">Senegal</option>
<option value="3801123">Serbia</option>
<option value="3801124">Serbia & Montenegro</option>
<option value="3801125">Seychelles</option>
<option value="3801126">Sierra Leone</option>
<option value="3801127">Singapore</option>
<option value="3801128">Slovakia</option>
<option value="3801129">Slovenia</option>
<option value="3801130">Solomon Islands</option>
<option value="3801131">Somalia</option>
<option value="3801132">South Africa</option>
<option value="3801133">South Sudan</option>
<option value="3801134">Spain</option>
<option value="3801135">Sri Lanka</option>
<option value="3801136">St Barthelemy</option>
<option value="3801137">St Eustatius</option>
<option value="3801138">St Helena</option>
<option value="3801139">St Kitts-Nevis</option>
<option value="3801140">St Lucia</option>
<option value="3801141">St Maarten</option>
<option value="3801142">St Pierre & Miquelon</option>
<option value="3801143">St Vincent & Grenadines</option>
<option value="3801144">Sudan</option>
<option value="3801145">Suriname</option>
<option value="3801146">Swaziland</option>
<option value="3801147">Sweden</option>
<option value="3801148">Switzerland</option>
<option value="3801149">Syria</option>
<option value="3801150">Tahiti</option>
<option value="3801151">Taiwan</option>
<option value="3801152">Tajikistan</option>
<option value="3801153">Tanzania</option>
<option value="3801154">Thailand</option>
<option value="3801155">Togo</option>
<option value="3801156">Tokelau</option>
<option value="3801157">Tonga</option>
<option value="3801158">Trinidad & Tobago</option>
<option value="3801159">Tunisia</option>
<option value="3801160">Turkey</option>
<option value="3801161">Turkmenistan</option>
<option value="3801162">Turks & Caicos Is</option>
<option value="3801163">Tuvalu</option>
<option value="3801164">Uganda</option>
<option value="3801165">Ukraine</option>
<option value="3801166">United Arab Emirates</option>
<option value="3801167">United Kingdom</option>
<option value="3801168">United States of America</option>
<option value="3801169">Uruguay</option>
<option value="3801170">Uzbekistan</option>
<option value="3801171">Vanuatu</option>
<option value="3801172">Vatican City State</option>
<option value="3801173">Venezuela</option>
<option value="3801174">Vietnam</option>
<option value="3801175">Virgin Islands (Brit)</option>
<option value="3801176">Virgin Islands (USA)</option>
<option value="3801177">Wake Island</option>
<option value="3801178">Wallis & Futana Is</option>
<option value="3801179">Yemen</option>
<option value="3801180">Zambia</option>
<option value="3801181">Zimbabwe</option>
</select><br />
<p id="for-organizers-text">For organizers:</p><p id="stay-updated">Stay updated on new programs, touring and special offers (frequency, 1-2 times a year)</p>
<div id="check-box">
<input type="checkbox" name="cm-ol-iyutz" id="Concertorganizers,English" /><label id="label-select" for="Concertorganizers,English">Concert organizers, English</label><input id="submit-form" type="submit" value="Subscribe" />
</div>
</form>
</div>
</div>
';

  $export['subscription_block_english'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'A subscription block in Spanish';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'subscription_block_spanish';
  $fe_block_boxes->body = '<div id="subscription-block">
<div id="subscription-text">
<p id="subscription-header">¡Estar al tanto!</p><p id="sign-up">Subscribir los nuevos videos, audios y textos de Via&nbsp;Artis&nbsp;Konsort:</p>
</div>
<div id="subscription-form">
<form action="http://laniche.createsend.com/t/r/s/tjkdjkr/" method="post">
      <input id="fieldName" name="cm-name" type="text" placeholder="&nbsp;Escribe tu nombre" />
      <input id="fieldEmail" name="cm-tjkdjkr-tjkdjkr" type="email" required placeholder="&nbsp;... y tu email" />
      <select id="fieldjjjytrr" name="cm-fo-jjjytrr">
<option value="3800931">Escoge su país</option>
<option value="3800931">Afghanistan</option>
<option value="3800932">Albania</option>
<option value="3800933">Algeria</option>
<option value="3800934">American Samoa</option>
<option value="3800935">Andorra</option>
<option value="3800936">Angola</option>
<option value="3800937">Anguilla</option>
<option value="3800938">Antigua & Barbuda</option>
<option value="3800939">Argentina</option>
<option value="3800940">Armenia</option>
<option value="3800941">Aruba</option>
<option value="3800942">Australia</option>
<option value="3800943">Austria</option>
<option value="3800944">Azerbaijan</option>
<option value="3800945">Azores</option>
<option value="3800946">Bahamas</option>
<option value="3800947">Bahrain</option>
<option value="3800948">Bangladesh</option>
<option value="3800949">Barbados</option>
<option value="3800950">Belarus</option>
<option value="3800951">Belgium</option>
<option value="3800952">Belize</option>
<option value="3800953">Benin</option>
<option value="3800954">Bermuda</option>
<option value="3800955">Bhutan</option>
<option value="3800956">Bolivia</option>
<option value="3800957">Bonaire</option>
<option value="3800958">Bosnia & Herzegovina</option>
<option value="3800959">Botswana</option>
<option value="3800960">Brazil</option>
<option value="3800961">British Indian Ocean Ter</option>
<option value="3800962">Brunei</option>
<option value="3800963">Bulgaria</option>
<option value="3800964">Burkina Faso</option>
<option value="3800965">Burundi</option>
<option value="3800966">Cambodia</option>
<option value="3800967">Cameroon</option>
<option value="3800968">Canada</option>
<option value="3800969">Canary Islands</option>
<option value="3800970">Cape Verde</option>
<option value="3800971">Cayman Islands</option>
<option value="3800972">Central African Republic</option>
<option value="3800973">Chad</option>
<option value="3800974">Channel Islands</option>
<option value="3800975">Chile</option>
<option value="3800976">China</option>
<option value="3800977">Christmas Island</option>
<option value="3800978">Cocos Island</option>
<option value="3800979">Colombia</option>
<option value="3800980">Comoros</option>
<option value="3800981">Congo</option>
<option value="3800982">Congo Democratic Rep</option>
<option value="3800983">Cook Islands</option>
<option value="3800984">Costa Rica</option>
<option value="3800985">Cote D\'Ivoire</option>
<option value="3800986">Croatia</option>
<option value="3800987">Cuba</option>
<option value="3800988">Curacao</option>
<option value="3800989">Cyprus</option>
<option value="3800990">Czech Republic</option>
<option value="3800991">Denmark</option>
<option value="3800992">Djibouti</option>
<option value="3800993">Dominica</option>
<option value="3800994">Dominican Republic</option>
<option value="3800995">East Timor</option>
<option value="3800996">Ecuador</option>
<option value="3800997">Egypt</option>
<option value="3800998">El Salvador</option>
<option value="3800999">Equatorial Guinea</option>
<option value="3801000">Eritrea</option>
<option value="3801001">Estonia</option>
<option value="3801002">Ethiopia</option>
<option value="3801003">Falkland Islands</option>
<option value="3801004">Faroe Islands</option>
<option value="3801005">Fiji</option>
<option value="3801006">Finland</option>
<option value="3801007">France</option>
<option value="3801008">French Guiana</option>
<option value="3801009">French Polynesia</option>
<option value="3801010">French Southern Ter</option>
<option value="3801011">Gabon</option>
<option value="3801012">Gambia</option>
<option value="3801013">Georgia</option>
<option value="3801014">Germany</option>
<option value="3801015">Ghana</option>
<option value="3801016">Gibraltar</option>
<option value="3801017">Great Britain</option>
<option value="3801018">Greece</option>
<option value="3801019">Greenland</option>
<option value="3801020">Grenada</option>
<option value="3801021">Guadeloupe</option>
<option value="3801022">Guam</option>
<option value="3801023">Guatemala</option>
<option value="3801024">Guernsey</option>
<option value="3801025">Guinea</option>
<option value="3801026">Guinea-Bissau</option>
<option value="3801027">Guyana</option>
<option value="3801028">Haiti</option>
<option value="3801029">Honduras</option>
<option value="3801030">Hong Kong</option>
<option value="3801031">Hungary</option>
<option value="3801032">Iceland</option>
<option value="3801033">India</option>
<option value="3801034">Indonesia</option>
<option value="3801035">Iran</option>
<option value="3801036">Iraq</option>
<option value="3801037">Ireland</option>
<option value="3801038">Isle of Man</option>
<option value="3801039">Israel</option>
<option value="3801040">Italy</option>
<option value="3801041">Jamaica</option>
<option value="3801042">Japan</option>
<option value="3801043">Jersey</option>
<option value="3801044">Jordan</option>
<option value="3801045">Kazakhstan</option>
<option value="3801046">Kenya</option>
<option value="3801047">Kiribati</option>
<option value="3801048">Korea North</option>
<option value="3801049">Korea South</option>
<option value="3801050">Kuwait</option>
<option value="3801051">Kyrgyzstan</option>
<option value="3801052">Laos</option>
<option value="3801053">Latvia</option>
<option value="3801054">Lebanon</option>
<option value="3801055">Lesotho</option>
<option value="3801056">Liberia</option>
<option value="3801057">Libya</option>
<option value="3801058">Liechtenstein</option>
<option value="3801059">Lithuania</option>
<option value="3801060">Luxembourg</option>
<option value="3801061">Macau</option>
<option value="3801062">Macedonia</option>
<option value="3801063">Madagascar</option>
<option value="3801064">Malawi</option>
<option value="3801065">Malaysia</option>
<option value="3801066">Maldives</option>
<option value="3801067">Mali</option>
<option value="3801068">Malta</option>
<option value="3801069">Marshall Islands</option>
<option value="3801070">Martinique</option>
<option value="3801071">Mauritania</option>
<option value="3801072">Mauritius</option>
<option value="3801073">Mayotte</option>
<option value="3801074">Mexico</option>
<option value="3801075">Midway Islands</option>
<option value="3801076">Moldova</option>
<option value="3801077">Monaco</option>
<option value="3801078">Mongolia</option>
<option value="3801079">Montenegro</option>
<option value="3801080">Montserrat</option>
<option value="3801081">Morocco</option>
<option value="3801082">Mozambique</option>
<option value="3801083">Myanmar</option>
<option value="3801084">Namibia</option>
<option value="3801085">Nauru</option>
<option value="3801086">Nepal</option>
<option value="3801087">Netherland Antilles</option>
<option value="3801088">Netherlands</option>
<option value="3801089">Nevis</option>
<option value="3801090">New Caledonia</option>
<option value="3801091">New Zealand</option>
<option value="3801092">Nicaragua</option>
<option value="3801093">Niger</option>
<option value="3801094">Nigeria</option>
<option value="3801095">Niue</option>
<option value="3801096">Norfolk Island</option>
<option value="3801097">Norway</option>
<option value="3801098">Oman</option>
<option value="3801099">Pakistan</option>
<option value="3801100">Palau Island</option>
<option value="3801101">Palestine</option>
<option value="3801102">Panama</option>
<option value="3801103">Papua New Guinea</option>
<option value="3801104">Paraguay</option>
<option value="3801105">Peru</option>
<option value="3801106">Philippines</option>
<option value="3801107">Pitcairn Island</option>
<option value="3801108">Poland</option>
<option value="3801109">Portugal</option>
<option value="3801110">Puerto Rico</option>
<option value="3801111">Qatar</option>
<option value="3801112">Reunion</option>
<option value="3801113">Romania</option>
<option value="3801114">Russia</option>
<option value="3801115">Rwanda</option>
<option value="3801116">Saipan</option>
<option value="3801117">Samoa</option>
<option value="3801118">Samoa American</option>
<option value="3801119">San Marino</option>
<option value="3801120">Sao Tome & Principe</option>
<option value="3801121">Saudi Arabia</option>
<option value="3801122">Senegal</option>
<option value="3801123">Serbia</option>
<option value="3801124">Serbia & Montenegro</option>
<option value="3801125">Seychelles</option>
<option value="3801126">Sierra Leone</option>
<option value="3801127">Singapore</option>
<option value="3801128">Slovakia</option>
<option value="3801129">Slovenia</option>
<option value="3801130">Solomon Islands</option>
<option value="3801131">Somalia</option>
<option value="3801132">South Africa</option>
<option value="3801133">South Sudan</option>
<option value="3801134">Spain</option>
<option value="3801135">Sri Lanka</option>
<option value="3801136">St Barthelemy</option>
<option value="3801137">St Eustatius</option>
<option value="3801138">St Helena</option>
<option value="3801139">St Kitts-Nevis</option>
<option value="3801140">St Lucia</option>
<option value="3801141">St Maarten</option>
<option value="3801142">St Pierre & Miquelon</option>
<option value="3801143">St Vincent & Grenadines</option>
<option value="3801144">Sudan</option>
<option value="3801145">Suriname</option>
<option value="3801146">Swaziland</option>
<option value="3801147">Sweden</option>
<option value="3801148">Switzerland</option>
<option value="3801149">Syria</option>
<option value="3801150">Tahiti</option>
<option value="3801151">Taiwan</option>
<option value="3801152">Tajikistan</option>
<option value="3801153">Tanzania</option>
<option value="3801154">Thailand</option>
<option value="3801155">Togo</option>
<option value="3801156">Tokelau</option>
<option value="3801157">Tonga</option>
<option value="3801158">Trinidad & Tobago</option>
<option value="3801159">Tunisia</option>
<option value="3801160">Turkey</option>
<option value="3801161">Turkmenistan</option>
<option value="3801162">Turks & Caicos Is</option>
<option value="3801163">Tuvalu</option>
<option value="3801164">Uganda</option>
<option value="3801165">Ukraine</option>
<option value="3801166">United Arab Emirates</option>
<option value="3801167">United Kingdom</option>
<option value="3801168">United States of America</option>
<option value="3801169">Uruguay</option>
<option value="3801170">Uzbekistan</option>
<option value="3801171">Vanuatu</option>
<option value="3801172">Vatican City State</option>
<option value="3801173">Venezuela</option>
<option value="3801174">Vietnam</option>
<option value="3801175">Virgin Islands (Brit)</option>
<option value="3801176">Virgin Islands (USA)</option>
<option value="3801177">Wake Island</option>
<option value="3801178">Wallis & Futana Is</option>
<option value="3801179">Yemen</option>
<option value="3801180">Zambia</option>
<option value="3801181">Zimbabwe</option>
      </select><br />
      <p id="for-organizers-text">Para los organizadores:</p><p id="stay-updated">Recibe noticias sobre programas, giras y ofertas especiales (frecuencia, 1-2 veces al año)</p>
      <div id="check-box">
      <input type="checkbox" name="cm-ol-itkidk" id="Organizadores,español" /><label id="label-select" for="Organizadores,español">Organizadores, español</label>
      <input id="submit-form" type="submit" value="¡Subscribir!" />
</form>
</div>
</div>';

  $export['subscription_block_spanish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Transparent background for second sidebar';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'transparent_background_2_sidebar';
  $fe_block_boxes->body = '<div id="sidebar-menu-transparent">&nbsp;</div>';

  $export['transparent_background_2_sidebar'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Transparent background for main menu';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'transparent_background_main_menu';
  $fe_block_boxes->body = '<div id="main-menu-transparent">&nbsp;</div>';

  $export['transparent_background_main_menu'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Via Artis link, Danish';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'via_artis_links_danish';
  $fe_block_boxes->body = '<p id="via-artis-link">&nbsp;- En <a href="http://viaartis.info" target="_blank" title="Om Via Artis Konsort">Via Artis Konsort </a>produktion</p>
<?php
drupal_add_js(\'jQuery(document).ready(function () { 
               var url_address;
               url_address = window.location.protocol + "//" + window.location.host;
               // document.write(url_address);
               document.getElementById("via-artis-link").innerHTML="&nbsp;- En <a href=" + url_address +" target=´_blank´ title=´About Via Artis Konsort´>Via Artis Konsort</a> produktion";
                });\', \'inline\');
?>';

  $export['via_artis_links_danish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Via Artis link, English';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'via_artis_links_english';
  $fe_block_boxes->body = '<p id="via-artis-link">&nbsp;- A <a href="http://viaartis.info" target="_blank" title="About Via Artis Konsort">Via Artis Konsort </a>production</p>
<?php
drupal_add_js(\'jQuery(document).ready(function () { 
               var url_address;
               url_address = window.location.protocol + "//" + window.location.host;
               // document.write(url_address);
               document.getElementById("via-artis-link").innerHTML="&nbsp;- A <a href=" + url_address +" target=´_blank´ title=´About Via Artis Konsort´>Via Artis Konsort</a> production";
                });\', \'inline\');
?>';

  $export['via_artis_links_english'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Via Artis links, Spanish';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'via_artis_links_spanish';
  $fe_block_boxes->body = '<p id="via-artis-link">&nbsp;- Una producción de <a href="http://viaartis.info" target="_blank" title="About Via Artis Konsort">Via Artis Konsort </a></p>
<?php
drupal_add_js(\'jQuery(document).ready(function () { 
               var url_address;
               url_address = window.location.protocol + "//" + window.location.host;
               // document.write(url_address);
               document.getElementById("via-artis-link").innerHTML="&nbsp;- Una producción de <a href=" + url_address +" target=´_blank´ title=´About Via Artis Konsort´>Via Artis Konsort</a>";
                });\', \'inline\');
?>';

  $export['via_artis_links_spanish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Widget recommending promote videos, Danish';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'widget_promote_videos_danish';
  $fe_block_boxes->body = '<p id="promote-video-text">Kommentarer og "likes" hjælper os med at forbedre vores synlighed på Youtube.
Du er også meget velkommen til at dele videoerne med venner og kollegaer. Tak :)</p>
';

  $export['widget_promote_videos_danish'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Widget recommending promote videos';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'widget_promote_videos_english';
  $fe_block_boxes->body = '<p id="promote-video-text">Liking or commenting on the video helps us improve our visibility on Youtube.<br> Feel free to share the videos with your network. Thank you :)</p>';

  $export['widget_promote_videos_english'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Widget promoting videos, Spanish';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'widget_promote_videos_spanish';
  $fe_block_boxes->body = '<p id="promote-video-text">Comentarios o poniendo un "me&nbsp;gusta" los videos nos ayuda a mejorar nuestra visibilidad en Youtube.<br>Te invitamos a compartir los videos con tus amigos y compañeros, gracias :)</p>';

  $export['widget_promote_videos_spanish'] = $fe_block_boxes;

  return $export;
}
