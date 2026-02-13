// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_6\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.21%
// test_accuracy: 73.56%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_35.txt']}
// generated: 2026-02-13 14:46:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.278119, 0.278106,
    -0.129385, 0.129467,
    -0.033830, 0.033822,
    0.079243, -0.079296,
    1.556115, -1.556198,
    -1.169156, 1.169252,
    -0.053453, 0.053439,
    0.127485, -0.127508,
    -0.628925, 0.628957,
    -0.385230, 0.385209,
    0.402297, -0.402335,
    1.004155, -1.004132,
};

float Cg_init[2] = {
    -0.469626, -0.469655
};

float xstd_init[12] = {
    0.000876, 0.000073, 0.008191, 0.063807, 0.000642, 0.000099, 0.013849, 0.050431, 0.003494, 0.001044, 0.118359, 0.211862
};

float xmean_init[12] = {
    0.005525, -0.007758, 0.002130, 0.092249, 0.002347, -0.007857, 0.004221, 0.045562, 0.009136, -0.006564, 0.136963, 0.477870
};

