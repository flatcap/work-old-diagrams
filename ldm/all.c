"ldm_create_data_partitions" -> "ldm_create_partition";
"ldm_create_data_partitions" -> "ldm_find_vblk";
"ldm_create_data_partitions" -> "ldm_get_disk_objid";
"ldm_create_data_partitions" -> "ldm_md_addpart";
"ldm_create_data_partitions" -> "md_autodetect_dev";
"ldm_frag_commit" -> "ldm_ldmdb_add";
"ldm_get_vblks" -> "ldm_frag_add";
"ldm_get_vblks" -> "ldm_frag_commit";
"ldm_get_vblks" -> "ldm_frag_free";
"ldm_get_vblks" -> "ldm_ldmdb_add";
"ldm_ldmdb_add" -> "ldm_parse_vblk";
"ldm_parse_cmp3" -> "ldm_get_vnum";
"ldm_parse_cmp3" -> "ldm_get_vstr";
"ldm_parse_cmp3" -> "ldm_relative";
"ldm_parse_dgr3" -> "ldm_get_vstr";
"ldm_parse_dgr3" -> "ldm_relative";
"ldm_parse_dgr4" -> "ldm_get_vstr";
"ldm_parse_dgr4" -> "ldm_relative";
"ldm_parse_dsk3" -> "ldm_get_vstr";
"ldm_parse_dsk3" -> "ldm_parse_guid";
"ldm_parse_dsk3" -> "ldm_relative";
"ldm_parse_dsk4" -> "ldm_relative";
"ldm_parse_guid" -> "ldm_parse_hexbyte";
"ldm_parse_privhead" -> "ldm_parse_guid";
"ldm_parse_prt3" -> "ldm_get_vnum";
"ldm_parse_prt3" -> "ldm_relative";
"ldm_parse_vblk" -> "ldm_get_vnum";
"ldm_parse_vblk" -> "ldm_get_vstr";
"ldm_parse_vblk" -> "ldm_parse_cmp3";
"ldm_parse_vblk" -> "ldm_parse_dgr3";
"ldm_parse_vblk" -> "ldm_parse_dgr4";
"ldm_parse_vblk" -> "ldm_parse_dsk3";
"ldm_parse_vblk" -> "ldm_parse_dsk4";
"ldm_parse_vblk" -> "ldm_parse_prt3";
"ldm_parse_vblk" -> "ldm_parse_vol5";
"ldm_parse_vblk" -> "ldm_relative";
"ldm_parse_vol5" -> "ldm_get_vnum";
"ldm_parse_vol5" -> "ldm_get_vstr";
"ldm_parse_vol5" -> "ldm_relative";
"ldm_partition" -> "ldm_create_data_partitions";
"ldm_partition" -> "ldm_free_vblks";
"ldm_partition" -> "ldm_get_vblks";
"ldm_partition" -> "ldm_validate_partition_table";
"ldm_partition" -> "ldm_validate_privheads";
"ldm_partition" -> "ldm_validate_tocblocks";
"ldm_partition" -> "ldm_validate_vmdb";
"ldm_validate_privheads" -> "ldm_compare_privheads";
"ldm_validate_privheads" -> "ldm_parse_privhead";
"ldm_validate_tocblocks" -> "ldm_compare_tocblocks";
"ldm_validate_tocblocks" -> "ldm_parse_tocblock";
"ldm_validate_vmdb" -> "ldm_parse_vmdb";
