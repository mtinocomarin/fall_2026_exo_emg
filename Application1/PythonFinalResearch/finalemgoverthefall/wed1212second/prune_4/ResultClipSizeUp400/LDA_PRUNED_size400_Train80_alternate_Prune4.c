// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_4\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.95%
// test_accuracy: 73.21%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 17:00:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.152947, -0.152999,
    -0.197467, 0.197628,
    -0.020410, 0.020392,
    -0.029294, 0.029199,
    1.372783, -1.372775,
    -1.145419, 1.145390,
    -0.301522, 0.301540,
    0.074444, -0.074439,
    -0.398280, 0.398247,
    -0.642987, 0.643032,
    0.281266, -0.281279,
    1.426926, -1.426938,
};

float Cg_init[2] = {
    -0.494414, -0.494423
};

float xstd_init[12] = {
    0.000850, 0.000073, 0.006860, 0.065522, 0.000748, 0.000131, 0.015522, 0.056005, 0.003388, 0.001030, 0.118910, 0.209601
};

float xmean_init[12] = {
    0.005522, -0.007761, 0.001429, 0.088776, 0.002410, -0.007845, 0.005306, 0.050204, 0.009014, -0.006627, 0.134218, 0.468572
};

