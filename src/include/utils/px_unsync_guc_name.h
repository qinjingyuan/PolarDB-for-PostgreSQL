		"allow_system_table_mods",
		"application_name",
		"archive_command",
		"archive_mode",
		"archive_timeout",
		"array_nulls",
		"auth_delay.milliseconds",
		"authentication_timeout",
		"autovacuum",
		"autovacuum_analyze_scale_factor",
		"autovacuum_analyze_threshold",
		"autovacuum_freeze_max_age",
		"autovacuum_max_workers",
		"autovacuum_multixact_freeze_max_age",
		"autovacuum_naptime",
		"autovacuum_vacuum_cost_delay",
		"autovacuum_vacuum_cost_limit",
		"autovacuum_vacuum_scale_factor",
		"autovacuum_vacuum_threshold",
		"autovacuum_work_mem",
		"backend_flush_after",
		"backslash_quote",
		"bgwriter_delay",
		"bgwriter_flush_after",
		"bgwriter_lru_maxpages",
		"bgwriter_lru_multiplier",
		"block_size",
		"bonjour",
		"bonjour_name",
		"bytea_output",
		"check_function_bodies",
		"checkpoint_completion_target",
		"checkpoint_flush_after",
		"checkpoint_timeout",
		"checkpoint_warning",
		"client_encoding",
		"cluster_name",
		"config_file",
		"constraint_exclusion",
		"cpu_index_tuple_cost",
		"cpu_operator_cost",
		"cpu_tuple_cost",
		"cursor_tuple_fraction",
		"data_checksums",
		"data_directory",
		"data_directory_mode",
		"data_sync_retry",
		"db_user_namespace",
		"deadlock_timeout",
		"debug_assertions",
		"debug_pretty_print",
		"debug_print_parse",
		"debug_print_plan",
		"debug_print_rewritten",
#ifdef LOCK_DEBUG
		"debug_deadlocks",
#endif
		"default_statistics_target",
		"default_text_search_config",
		"default_transaction_deferrable",
		"default_transaction_isolation",
		"default_transaction_read_only",
		"default_with_oids",
		"dynamic_library_path",
		"dynamic_shared_memory_type",
		"effective_cache_size",
		"effective_io_concurrency",
		"enable_bitmapscan",
		"enable_gathermerge",
		"enable_hashagg",
		"enable_hashjoin",
		"enable_indexonlyscan",
		"enable_indexscan",
		"enable_material",
		"enable_mergejoin",
		"enable_nestloop",
		"enable_parallel_append",
		"enable_parallel_hash",
		"enable_partition_pruning",
		"enable_partitionwise_aggregate",
		"enable_partitionwise_join",
		"enable_seqscan",
		"enable_sort",
		"enable_tidscan",
		"escape_string_warning",
		"event_source",
		"exit_on_error",
		"external_pid_file",
		"extra_float_digits",
		"from_collapse_limit",
		"fsync",
		"full_page_writes",
		"geqo",
		"geqo_effort",
		"geqo_generations",
		"geqo_pool_size",
		"geqo_seed",
		"geqo_selection_bias",
		"geqo_threshold",
		"hba_file",
		"hot_standby",
		"hot_standby_feedback",
		"huge_pages",
		"ident_file",
		"ignore_checksum_failure",
		"ignore_system_indexes",
		"integer_datetimes",
		"is_superuser",
		"jit_provider",
		"join_collapse_limit",
		"krb_caseins_users",
		"krb_server_keyfile",
		"lc_collate",
		"lc_ctype",
		"lc_messages",
		"lc_monetary",
		"lc_time",
		"listen_addresses",
		"local_preload_libraries",
		"lock_timeout",
		"lo_compat_privileges",
		"log_autovacuum_min_duration",
		"log_checkpoints",
		"log_connections",
		"log_destination",
		"log_directory",
		"log_disconnections",
		"log_file_mode",
		"log_filename",
		"logging_collector",
		"log_hostname",
		"log_line_prefix",
		"log_lock_waits",
		"log_parser_stats",
		"log_planner_stats",
		"log_replication_commands",
		"log_rotation_age",
		"log_rotation_size",
		"log_statement",
		"log_temp_files",
		"log_timezone",
		"log_truncate_on_rotation",
		"max_connections",
		"max_files_per_process",
		"max_function_args",
		"max_identifier_length",
		"max_index_keys",
		"max_locks_per_transaction",
		"max_logical_replication_workers",
		"max_parallel_maintenance_workers",
		"max_parallel_workers",
		"max_pred_locks_per_page",
		"max_pred_locks_per_relation",
		"max_pred_locks_per_transaction",
		"max_prepared_transactions",
		"max_replication_slots",
		"max_stack_depth",
		"max_standby_archive_delay",
		"max_standby_streaming_delay",
		"max_sync_workers_per_subscription",
		"max_wal_senders",
		"max_wal_size",
		"max_worker_processes",
		"min_parallel_index_scan_size",
		"min_parallel_table_scan_size",
		"min_wal_size",
		"old_snapshot_threshold",
		"operator_precedence_warning",
		"parallel_leader_participation",
		"password_encryption",
		"pg_stat_statements.max",
		"pg_stat_statements.save",
		"pldebugger.max_debugger_backend",
		"polar_apply_global_guc_for_super",
		"polar_async_buffer_slot_size",
		"polar_async_ddl_lock_replay_worker_num",
		"polar_auditlog_max_query_length",
		"polar_auto_cascade_extensions",
		"polar_available_extensions",
		"polar_bg_replay_batch_size",
		"polar_bgwriter_batch_size_flushlist",
		"polar_bgwriter_max_batch_size",
		"polar_bgwriter_sleep_lsn_lag",
		"polar_buffer_copy_lsn_lag_with_cons_lsn",
		"polar_buffer_copy_min_modified_count",
		"polar_bulk_extend_size",
		"polar_cancel_key",
		"polar_check_checkpoint_legal_interval",
		"polar_clog_max_local_cache_segments",
		"polar_clog_slot_size",
		"polar_cluster_passphrase_command",
		"polar_committs_buffer_slot_size",
		"polar_commit_ts_max_local_cache_segments",
		"polar_copy_buffers",
		"polar_create_table_with_full_replica_identity",
		"polar_csn_enable",
		"polar_csnlog_max_local_cache_segments",
		"polar_csnlog_slot_size",
		"polar_csnlog_upperbound_enable",
		"polar_csn_xid_snapshot",
		"polar_datadir",
		"polar_data_encryption_cipher",
		"polar_datamax_archive_timeout",
		"polar_datamax_prealloc_walfile_num",
		"polar_datamax_prealloc_walfile_timeout",
		"polar_datamax_remove_archivedone_wal_timeout",
		"polar_datamax_save_replication_slots_timeout",
		"polar_delay_dml_lsn_lag_threshold",
		"polar_delay_dml_option",
		"polar_disk_name",
		"polar_dma_auto_purge",
		"polar_dma_cluster_id",
		"polar_dma_config_change_timeout",
		"polar_dma_delay_election",
		"polar_dma_delay_election_timeout",
		"polar_dma_disable_election",
		"polar_dma_election_timeout",
		"polar_dma_file",
		"polar_dma_init_meta",
		"polar_dma_io_thread_count",
		"polar_dma_learners_info",
		"polar_dma_log_slot_size",
		"polar_dma_max_delay_index",
		"polar_dma_max_packet_size",
		"polar_dma_members_info",
		"polar_dma_min_delay_index",
		"polar_dma_new_follower_threshold",
		"polar_dma_pipeline_timeout",
		"polar_dma_port_deviation",
		"polar_dma_purge_timeout",
		"polar_dma_repl_appname",
		"polar_dma_repl_passwd",
		"polar_dma_repl_slotname",
		"polar_dma_repl_user",
		"polar_dma_send_timeout",
		"polar_dma_sync_meta",
		"polar_dma_worker_thread_count",
		"polar_dma_xlog_check_timeout",
		"polar_dropdb_write_wal_before_rm_file",
		"polar_droptbl_write_wal_before_rm_file",
		"polar_enable_alb_client_address",
		"polar_enable_async_ddl_lock_replay",
		"polar_enable_async_ddl_lock_replay_unit_test",
		"polar_enable_audit_log_bind_sql_parameter",
		"polar_enable_checkpoint_in_backup",
		"polar_enable_control_vm_flush",
		"polar_enable_convert_or_to_union_all",
		"polar_enable_copy_buffer",
		"polar_enable_coredump_handler",
		"polar_enable_create_backup_history_file_in_backup",
		"polar_enable_create_table_as_bulk_insert",
		"polar_enable_ddl_sync_mode",
		"polar_enable_debug",
		"polar_enable_dma",
		"polar_enable_early_launch_checkpointer",
		"polar_enable_early_launch_parallel_bgwriter",
		"polar_enable_error_to_audit_log",
		"polar_enable_fallocate_walfile",
		"polar_enable_flushlist",
		"polar_enable_fullpage_snapshot",
		"polar_enable_full_page_write_in_backup",
		"polar_enable_keep_wal_ready_file",
		"polar_enable_lazy_checkpoint",
		"polar_enable_lazy_checkpoint_in_backup",
		"polar_enable_lazy_end_of_recovery_checkpoint",
		"polar_enable_localfs_test_mode",
		"polar_enable_master_pbp",
		"polar_enable_master_recovery_bulk_extend",
		"polar_enable_master_xlog_read_ahead",
		"polar_enable_maxscale_support",
		"polar_enable_multi_syslogger",
		"polar_enable_node_static_config",
		"polar_enable_normal_bgwriter",
		"polar_enable_page_outdate",
		"polar_enable_parallel_bgwriter",
		"polar_enable_persisted_buffer_pool",
		"polar_enable_persisted_logical_slot",
		"polar_enable_persisted_physical_slot",
		"polar_enable_persisted_spill_file",
		"polar_enable_physical_repl_non_super_wal_snd",
		"polar_enable_polar_superuser",
		"polar_enable_pread",
		"polar_enable_parallel_replay_standby_mode",
		"polar_enable_promote_wait_for_walreceive_done",
		"polar_enable_pwrite",
		"polar_enable_resolve_conflict",
		"polar_enable_semi_sync_optimization",
		"polar_enable_shared_storage_mode",
		"polar_enable_simply_redo_error_log",
		"polar_enable_slru_hash_index",
		"polar_enable_standby_pbp",
		"polar_enable_stat_wait_info",
		"polar_enable_switch_wal_in_backup",
		"polar_enable_syslog_file_buffer",
		"polar_enable_syslog_pipe_buffer",
		"polar_enable_tde_warning",
		"polar_enable_track_lock_stat",
		"polar_enable_track_lock_timing",
		"polar_enable_track_network_timing",
		"polar_enable_transaction_sync_mode",
		"polar_enable_virtual_pid",
		"polar_enable_xact_split",
		"polar_enable_xact_split_debug",
		"polar_enable_xlog_buffer",
		"polar_forbidden_extensions",
		"polar_forbidden_functions_ext",
		"polar_force_change_checkpoint",
		"polar_force_flush_buffer",
		"polar_force_trans_ro_non_sup",
		"polar_force_unlogged_to_logged_table",
		"polar_fullpage_keep_segments",
		"polar_fullpage_snapshot_min_modified_count",
		"polar_fullpage_snapshot_oldest_lsn_delay_threshold",
		"polar_fullpage_snapshot_replay_delay_threshold",
		"polar_high_priority_replication_standby_names",
		"polar_hold_truncate_interrupt",
		"polar_hostid",
		"polar_index_bulk_extend_size",
		"polar_index_create_bulk_extend_size",
		"polar_internal_allowed_extensions",
		"polar_internal_allowed_roles",
		"polar_internal_shared_preload_libraries",
		"polar_logical_repl_workers_reserved_for_superuser",
		"polar_logindex_bloom_blocks",
		"polar_logindex_max_local_cache_segments",
		"polar_logindex_mem_size",
		"polar_logindex_table_batch_size",
		"polar_log_statement_with_duration",
		"polar_low_priority_replication_standby_names",
		"polar_max_auditlog_files",
		"polar_max_log_files",
		"polar_max_logindex_files",
		"polar_max_non_super_conns",
		"polar_max_resource_groups",
		"polar_max_slowlog_files",
		"polar_max_super_conns",
		"polar_min_bulk_extend_table_size",
		"polar_monitor.backend_type_max",
		"polar_monitor.mcxt_timeout",
		"polar_monitor.mcxt_view",
		"polar_multixact_max_local_cache_segments",
		"polar_mxact_member_buffer_slot_size",
		"polar_mxact_offset_buffer_slot_size",
		"polar_num_of_sysloggers",
		"polar_oldserxid_buffer_slot_size",
		"polar_openfile_with_readonly_in_replica",
		"polar_parallel_bgwriter_check_interval",
		"polar_parallel_bgwriter_delay",
		"polar_parallel_bgwriter_enable_dynamic",
		"polar_parallel_bgwriter_workers",
		"polar_parallel_new_bgwriter_threshold_lag",
		"polar_parallel_new_bgwriter_threshold_time",
		"polar_partition_recursive_reloptions",
		"polar_primary_dml_delay",
		"polar_priority_replication_force_wait",
		"polar_priority_replication_mode",
		"polar_publish_via_partition_root",
		"polar_px_cached_px_workers",
		"polar_px_debug_cancel_print",
		"polar_px_dop_per_node",
		"polar_px_enable_check_workers",
		"polar_px_enable_create_table_as",
		"polar_px_enable_cte",
		"polar_px_enable_executor",
		"polar_px_enable_join",
		"polar_px_enable_plan_cache",
		"polar_px_enable_plpgsql",
		"polar_px_enable_prepare_statement",
		"polar_px_enable_procedure",
		"polar_px_enable_remove_redundant_results",
		"polar_px_enable_replay_wait",
		"polar_px_enable_sort_distinct",
		"px_enable_join_prefetch_inner",
		"polar_px_enable_subquery",
		"polar_px_enable_transaction",
		"polar_px_enable_window_function",
		"polar_px_interconnect_cache_future_packets",
		"polar_px_is_writer",
		"polar_px_log_dispatch_stats",
		"polar_px_max_plan_size",
		"polar_px_motion_cost_per_row",
		"polar_px_optimizer_apply_left_outer_to_union_all_disregarding_stats",
		"polar_px_optimizer_array_constraints",
		"polar_px_optimizer_array_expansion_threshold",
		"polar_px_optimizer_cost_model",
		"polar_px_optimizer_cost_threshold",
		"polar_px_optimizer_cte_inlining",
		"polar_px_optimizer_damping_factor_filter",
		"polar_px_optimizer_damping_factor_groupby",
		"polar_px_optimizer_damping_factor_join",
		"polar_px_optimizer_dpe_stats",
		"polar_px_optimizer_enable_assert_maxonerow",
		"polar_px_optimizer_enable_associativity",
		"polar_px_optimizer_enable_bitmapscan",
		"polar_px_optimizer_enable_broadcast_nestloop_outer_child",
		"polar_px_optimizer_enable_constant_expression_evaluation",
		"polar_px_optimizer_enable_ctas",
		"polar_px_optimizer_enable_derive_stats_all_groups",
		"polar_px_optimizer_enable_direct_dispatch",
		"polar_px_enable_explain_all_stat",
		"polar_px_optimizer_enable_dml",
		"polar_px_optimizer_enable_dml_constraints",
		"polar_px_optimizer_enable_dml_triggers",
		"polar_px_optimizer_enable_dynamictablescan",
		"polar_px_optimizer_enable_dynamicindexscan",
		"polar_px_optimizer_enable_eageragg",
		"polar_px_optimizer_enable_gather_on_segment_for_dml",
		"polar_px_optimizer_enable_groupagg",
		"polar_px_optimizer_enable_hashagg",
		"polar_px_optimizer_enable_hashjoin",
		"polar_px_optimizer_enable_hashjoin_redistribute_broadcast_children",
		"polar_px_optimizer_enable_indexjoin",
		"polar_px_optimizer_enable_indexscan",
		"polar_px_optimizer_enable_shareindexscan",
		"polar_px_optimizer_enable_dynamicshareindexscan",
		"polar_px_optimizer_enable_indexonlyscan",
		"polar_px_optimizer_enable_lasj_notin",
		"polar_px_optimizer_enable_crossproduct",
		"polar_px_optimizer_enable_brinscan",
		"polar_px_optimizer_enable_master_only_queries",
		"polar_px_optimizer_enable_materialize",
		"polar_px_optimizer_enable_mergejoin",
		"polar_px_optimizer_enable_motion_broadcast",
		"polar_px_optimizer_enable_motion_gather",
		"polar_px_optimizer_enable_motion_redistribute",
		"polar_px_optimizer_enable_motions",
		"polar_px_optimizer_enable_motions_masteronly_queries",
		"polar_px_optimizer_enable_multiple_distinct_aggs",
		"polar_px_optimizer_enable_nestloopjoin",
		"polar_px_optimizer_enable_outerjoin_rewrite",
		"polar_px_optimizer_enable_outerjoin_to_unionall_rewrite",
		"polar_px_optimizer_enable_partial_index",
		"polar_px_optimizer_enable_partition_propagation",
		"polar_px_optimizer_enable_partition_selection",
		"polar_px_optimizer_enable_relsize_collection",
		"polar_px_optimizer_enable_seqscan",
		"polar_px_optimizer_enable_seqsharescan",
		"polar_px_optimizer_enable_sort",
		"polar_px_optimizer_enable_space_pruning",
		"polar_px_optimizer_enable_streaming_material",
		"polar_px_optimizer_enforce_subplans",
		"polar_px_optimizer_enumerate_plans",
		"polar_px_optimizer_expand_fulljoin",
		"polar_px_optimizer_extract_dxl_stats",
		"polar_px_optimizer_extract_dxl_stats_all_nodes",
		"polar_px_optimizer_force_agg_skew_avoidance",
		"polar_px_optimizer_force_expanded_distinct_aggs",
		"polar_px_optimizer_force_multistage_agg",
		"polar_px_optimizer_force_three_stage_scalar_dqa",
		"polar_px_optimizer_join_arity_for_associativity_commutativity",
		"polar_px_optimizer_join_order",
		"polar_px_optimizer_join_order_threshold",
		"polar_px_optimizer_log",
		"polar_px_optimizer_log_failure",
		"polar_px_explain_memory_verbosity",
		"polar_px_optimizer_metadata_caching",
		"polar_px_optimizer_minidump",
		"polar_px_optimizer_multilevel_partitioning",
		"polar_px_optimizer_nestloop_factor",
		"polar_px_optimizer_parallel_union",
		"polar_px_optimizer_penalize_broadcast_threshold",
		"polar_px_optimizer_penalize_skew",
		"polar_px_optimizer_print_expression_properties",
		"polar_px_optimizer_print_group_properties",
		"polar_px_optimizer_print_job_scheduler",
		"polar_px_optimizer_print_memo_after_exploration",
		"polar_px_optimizer_print_memo_after_implementation",
		"polar_px_optimizer_print_memo_after_optimization",
		"polar_px_optimizer_print_missing_stats",
		"polar_px_optimizer_print_optimization_context",
		"polar_px_optimizer_print_optimization_stats",
		"polar_px_optimizer_print_plan",
		"polar_px_optimizer_print_query",
		"polar_px_optimizer_print_xform",
		"polar_px_optimizer_print_xform_results",
		"polar_px_optimizer_print_memo_enforcement",
		"polar_px_optimizer_print_required_columns",
		"polar_px_optimizer_print_equiv_distr_specs",
		"polar_px_optimizer_prune_computed_columns",
		"polar_px_optimizer_prune_unused_columns",
		"polar_px_optimizer_push_requirements_from_consumer_to_producer",
		"polar_px_optimizer_remove_order_below_dml",
		"polar_px_optimizer_sample_plans",
		"polar_px_optimizer_search_strategy_path",
		"polar_px_optimizer_segments",
		"polar_px_optimizer_sort_factor",
		"polar_px_optimizer_share_tablescan_factor",
		"polar_px_optimizer_share_indexscan_factor",
		"polar_px_optimizer_trace_fallback",
		"polar_px_optimizer_use_external_constant_expression_evaluation_for_ints",
		"polar_px_optimizer_use_px_allocators",
		"polar_px_qc_hostname",
		"polar_px_qc_port",
		"polar_px_reject_internal_tcp_connection",
		"polar_px_selectivity_damping_factor",
		"polar_px_test_print_direct_dispatch_info",
		"polar_px_version",
		"polar_px_worker_connect_timeout",
		"polar_read_ahead_xlog_num",
		"polar_recovery_bulk_extend_size",
		"polar_release_date",
		"polar_rel_size_cache_blocks",
		"polar_rename_wal_ready_file",
		"polar_replay_fpi_check_lsn",
		"polar_replica_multi_version_snapshot_enable",
		"polar_replica_multi_version_snapshot_retry_times",
		"polar_replica_multi_version_snapshot_slot_num",
		"polar_repl_slots_reserved_for_superuser",
		"polar_reserved_polar_super_conns",
		"polar_resource_group.database_name",
		"polar_resource_group.stat_interval",
		"polar_resource_group.total_mem_limit_rate",
		"polar_resource_group.total_mem_request_rate",
		"polar_ring_buffer_vacuum",
		"polar_semi_sync_max_backoff_window",
		"polar_semi_sync_min_backoff_window",
		"polar_semi_sync_observation_window",
		"polar_shutdown_walsnd_wait_non_super",
		"polar_shutdown_walsnd_wait_replication_kind",
		"polar_skip_fill_walfile_zero_page",
		"polar_standby_feedback",
		"polar_startup_from_local_data_file",
		"polar_startup_replay_delay_size",
		"polar_stat_sql.save",
		"polar_storage_cluster_name",
		"polar_subtrans_buffer_slot_size",
		"polar_super_run_as_secdef",
		"polar_supported_extensions",
		"polar_suppress_preload_error",
		"polar_sync_replication_timeout",
		"polar_sync_rep_timeout_break_lsn_lag",
		"polar_temp_relation_file_in_shared_storage",
		"polar_unit_test_mem_size",
		"polar_use_statistical_relpages",
		"polar_version",
		"polar_vfs.enable_file_size_cache",
		"polar_vfs.enbale_io_time_stat",
		"polar_vfs.localfs_test_mode",
		"polar_vfs.max_direct_io_size",
		"polar_vfs.max_pfsd_io_size",
		"polar_vfs.pfs_force_mount",
		"polar_virtual_pid",
		"polar_wal_buffer_insert_locks",
		"polar_wal_snd_reserved_for_superuser",
		"polar_worker.core_file_outdate_time",
		"polar_worker.core_file_path",
		"polar_worker.core_name_suffix",
		"polar_worker.enable_polar_worker",
		"polar_worker.num_corefile_reserved_new",
		"polar_worker.num_corefile_reserved_old",
		"polar_worker.polar_worker_check_interval",
		"polar_worker.prealloc_wal_file_num",
		"polar_worker.xlog_temp_outdate_time",
		"polar_write_logindex_active_table_delay",
		"polar_xact_split_wait_lsn",
		"polar_xact_split_xids",
		"polar_xlog_page_buffers",
		"polar_xlog_queue_buffers",
		"port",
		"post_auth_delay",
		"pre_auth_delay",
		"quote_all_identifiers",
		"random_page_cost",
		"restart_after_crash",
		"role",
		"seed",
		"segment_size",
		"seq_page_cost",
		"server_encoding",
		"server_version",
		"server_version_num",
		"session_authorization",
		"session_preload_libraries",
		"session_replication_role",
		"shared_buffers",
		"shared_preload_libraries",
		"ssl",
		"ssl_ca_file",
		"ssl_cert_file",
		"ssl_ciphers",
		"ssl_crl_file",
		"ssl_dh_params_file",
		"ssl_ecdh_curve",
		"ssl_key_file",
		"ssl_passphrase_command",
		"ssl_passphrase_command_supports_reload",
		"ssl_prefer_server_ciphers",
		"ssl_renegotiation_limit",
		"standard_conforming_strings",
		"stats_temp_directory",
		"superuser_reserved_connections",
		"synchronize_seqscans",
		"synchronous_commit",
		"synchronous_standby_names",
		"syslog_facility",
		"syslog_ident",
		"syslog_sequence_numbers",
		"syslog_split_messages",
		"tcp_keepalives_count",
		"tcp_keepalives_idle",
		"tcp_keepalives_interval",
		"temp_file_limit",
		"timezone_abbreviations",
		"trace_notify",
		"trace_recovery_messages",
		"trace_sort",
#ifdef LOCK_DEBUG
		"trace_locks",
		"trace_lock_oidmin",
		"trace_lock_table",
		"trace_lwlocks",
		"trace_userlocks",
		"debug_deadlocks",
		"polar_trace_lock_flow",
		"polar_trace_system_table",
#endif
		"track_activities",
		"track_activity_query_size",
		"track_commit_timestamp",
		"track_counts",
		"track_functions",
		"track_io_timing",
		"transaction_deferrable",
		"transaction_isolation",
		"transaction_read_only",
		"transform_null_equals",
		"unix_socket_directories",
		"unix_socket_group",
		"unix_socket_permissions",
		"update_process_title",
		"vacuum_cleanup_index_scale_factor",
		"vacuum_cost_delay",
		"vacuum_cost_limit",
		"vacuum_cost_page_dirty",
		"vacuum_cost_page_hit",
		"vacuum_cost_page_miss",
		"vacuum_defer_cleanup_age",
		"vacuum_freeze_min_age",
		"vacuum_freeze_table_age",
		"vacuum_multixact_freeze_min_age",
		"vacuum_multixact_freeze_table_age",
		"wal_block_size",
		"wal_buffers",
		"wal_compression",
		"wal_consistency_checking",
		"wal_keep_segments",
		"wal_level",
		"wal_log_hints",
		"wal_receiver_status_interval",
		"wal_receiver_timeout",
		"wal_retrieve_retry_interval",
		"wal_segment_size",
		"wal_sender_timeout",
		"wal_sync_method",
		"wal_writer_delay",
		"wal_writer_flush_after",
		"xmlbinary",
		"xmloption",
		"zero_damaged_pages",
		"polar_px_nodes",
		"polar_enable_gist_sort",
		"max_slot_wal_keep_size",
		"wal_recycle",
		"polar_px_enable_cte_shared_scan",
		"polar_bt_write_page_buffer_size",
		"polar_enable_max_slot_wal_keep_size",
		"polar_px_enable_partition",
		"polar_px_enable_partition_hash",
		"polar_px_enable_relsize_collection",
		"polar_enable_flashback_log",
		"polar_flashback_logindex_mem_size",
		"polar_flashback_logindex_bloom_blocks",
		"polar_flashback_log_keep_segments",
		"polar_flashback_log_buffers",
		"polar_flashback_log_insert_locks",
		"polar_flashback_logindex_queue_buffers",
		"polar_flashback_log_bgwrite_delay",
		"polar_flashback_log_flush_max_size",
		"polar_flashback_log_debug",
		"polar_flashback_log_sync_buf_timeout",
		"polar_flashback_log_insert_list_delay",
		"polar_px_delete_dop_num",
		"polar_px_enable_delete",
		"polar_px_enable_insert_from_tableless",
		"polar_px_enable_insert_order_sensitive",
		"polar_px_enable_insert_partition_table",
		"polar_px_enable_insert_select",
		"polar_px_enable_left_index_nestloop_join",
		"polar_px_enable_opfamily_for_distribution",
		"polar_px_enable_partitionwise_join",
		"polar_px_enable_pre_optimizer_check",
		"polar_px_enable_result_hash_filter",
		"polar_px_enable_tableless_scan",
		"polar_px_enable_update",
		"polar_px_enable_remove_delete_redundant_motion",
		"polar_px_enable_remove_update_redundant_motion",
		"polar_px_ignore_unusable_nodes",
		"polar_px_insert_dop_num",
		"polar_px_optimizer_remove_superfluous_order",
		"polar_px_update_dop_num",
		"polar_px_use_standby",
		"polar_px_wait_lock_timeout",
		"polar_flashback_log_insert_list_max_num",
		"polar_flashback_point_segments",
		"polar_flashback_point_timeout",
		"polar_has_partial_write",
		"polar_enable_flashback_drop",
		"polar_enable_fast_recovery_area",
		"polar_fast_recovery_area_rotation",
		"polar_workers_per_flashback_table",
		"polar_px_enable_join_prefetch_inner",
		"polar_px_enable_plpgsql",
		"polar_px_enable_procedure",
		"polar_px_enable_prepare_statement",
		"polar_px_enable_check_workers",
		"polar_px_enable_transaction",
		"polar_px_enable_sort_distinct",
		"polar_px_enable_check_workers",
		"polar_px_enable_btbuild",
		"polar_px_enable_btbuild_cic_phase2",
		"polar_px_enable_check_workers",
		"polar_enable_shared_server",
