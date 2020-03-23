// These function are not referenced anywhere inside hamlib
// according to cppcheck
// Some are marked with XXREMOVEDXX in the code are are
// subject to being deprecated in a future release

void used_externally()
{
    uh_close_wkey(); // used by external programs
    uh_open_wkey();  // used by external programs
    rig_mem_count(); // referenced by rig.swg and tcl
}

void never_used()
{
    adat_mode_anr2rnr();
    adat_parse_vfo();
    adat_ptt_rnr2anr();
    amp_ext_level_foreach();
    amp_ext_lookup_tok();
    amp_ext_parm_foreach();
    amp_ext_token_lookup();
    amp_probe_all();
    amp_set_powerstat();
    amp_token_foreach();
    amp_unregister();
    cm108_dcd_get();
    elad_close();
    elad_get_channel();
    elad_get_ctcss_sql();
    elad_get_ctcss_tone();
    elad_get_ext_parm();
    elad_get_info();
    elad_get_level();
    elad_get_mem();
    elad_get_mem_if();
    elad_get_mode_if();
    elad_open();
    elad_send_morse();
    elad_set_ant_no_ack();
    elad_set_channel();
    elad_set_ctcss_sql();
    elad_set_ctcss_tone();
    elad_set_ctcss_tone_tn();
    elad_set_ext_parm();
    elad_set_level();
    elad_set_mem();
    elad_set_ptt_safe();
    elad_set_split();
    elad_vfo_op();
    flushBuffer();
    foreach_opened_amp();
    foreach_opened_rot();
    get_output_freq();
    getopt_long_only();
    gp2000_get_func();
    gp2000_set_func();
    hzToPBS();
    i2c_read();
    ic10_set_ptt();
    ic9100_get_level();
    ic9100_set_level();
    icmarine_open();
    icom_get_vfo();
    icom_set_dsp_flt();
    int2BCD();
    is_uh_radio_fd();
    lt_dladdsearchdir();
    lt_dlclose();
    lt_dlerror();
    lt_dlexit();
    lt_dlinit();
    lt_dlopen();
    lt_dlopenext();
    lt_dlsym();
    miniVNA_get_info();
    newcat_decode_event();
    newcat_get_dcd();
    newcat_get_dcs_code();
    newcat_get_dcs_sql();
    newcat_get_ext_level();
    newcat_get_ext_parm();
    newcat_get_parm();
    newcat_get_rptr_offs();
    newcat_get_split_freq();
    newcat_get_split_mode();
    newcat_get_tone();
    newcat_get_tone_sql();
    newcat_recv_dtmf();
    newcat_reset();
    newcat_scan();
    newcat_send_dtmf();
    newcat_send_morse();
    newcat_set_bank();
    newcat_set_dcs_code();
    newcat_set_dcs_sql();
    newcat_set_ext_level();
    newcat_set_ext_parm();
    newcat_set_parm();
    newcat_set_rptr_offs();
    newcat_set_split_freq();
    newcat_set_split_mode();
    newcat_set_tone();
    newcat_set_tone_sql();
    pll_locked_p();
    readInt();
    read_info();
    rig_copy_channel();
    rig_copyright();
    rig_ext_token_lookup();
    rig_get_mem_all();
    rig_get_mem_all_cb();
    rig_license();
    rig_parse_mtype();
    rig_probe_all();
    rig_send_voice_mem();
    rig_set_bank();
    rig_set_debug_callback();
    rig_set_debug_file();
    rig_set_ext_func();
    rig_set_mem_all();
    rig_set_mem_all_cb();
    rig_set_pltune_callback();
    rig_set_twiddle();
    rig_unregister();
    rig_version();
    rot_probe_all();
    rot_unregister();
    set_parm_all_cb_generic();
    tentec_trx_open();
    thd72_get_chan_all_cb();
    thd74_get_chan_all_cb();
    writeInt();
    write_both_dacs();
}

main()
{
    used_externally();
    never_used();
}