// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_4\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.08%
// test_accuracy: 73.86%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-17 12:38:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.772292, 0.772335,
    0.153553, -0.153617,
    0.362125, -0.362170,
    0.641676, -0.641653,
    -0.452020, 0.451904,
    0.242305, -0.242144,
    -0.050387, 0.050406,
    -0.079173, 0.079118,
    0.180214, -0.180008,
    -0.084520, 0.084087,
    -0.412678, 0.412789,
    -0.003627, 0.003780,
};

float Cg_init[2] = {
    -0.255542, -0.255539
};

float xstd_init[12] = {
    0.004428, 0.002017, 0.147968, 0.204587, 0.001125, 0.000201, 0.028639, 0.085401, 0.000674, 0.000167, 0.028772, 0.106443
};

float xmean_init[12] = {
    0.010439, -0.005674, 0.243681, 0.682078, 0.003405, -0.007758, 0.009827, 0.078702, 0.003522, -0.007733, 0.013117, 0.117728
};

