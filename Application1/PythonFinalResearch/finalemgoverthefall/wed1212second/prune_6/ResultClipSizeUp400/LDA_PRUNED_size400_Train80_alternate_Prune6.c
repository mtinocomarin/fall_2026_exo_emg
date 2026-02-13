// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_6\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.74%
// test_accuracy: 72.32%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-17 17:01:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.106601, -0.106630,
    -0.180260, 0.180363,
    -0.013708, 0.013696,
    -0.080016, 0.079955,
    1.513377, -1.513403,
    -1.218197, 1.218222,
    -0.327458, 0.327463,
    0.157519, -0.157523,
    -0.626312, 0.626291,
    -0.576024, 0.576056,
    0.402057, -0.402069,
    1.522331, -1.522339,
};

float Cg_init[2] = {
    -0.584134, -0.584149
};

float xstd_init[12] = {
    0.000870, 0.000075, 0.007108, 0.066874, 0.000728, 0.000122, 0.015570, 0.056779, 0.003434, 0.001050, 0.120857, 0.212167
};

float xmean_init[12] = {
    0.005543, -0.007760, 0.001538, 0.089231, 0.002400, -0.007848, 0.005275, 0.051209, 0.009079, -0.006595, 0.137510, 0.473627
};

