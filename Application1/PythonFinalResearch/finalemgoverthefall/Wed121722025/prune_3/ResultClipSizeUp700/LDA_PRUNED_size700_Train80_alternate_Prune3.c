// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 67.37%
// test_accuracy: 53.85%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-17 13:42:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.306803, 0.306776,
    0.141391, -0.141325,
    -0.005648, 0.005647,
    -0.084992, 0.084944,
    -0.361149, 0.361249,
    -0.139024, 0.138940,
    0.021877, -0.021892,
    0.280566, -0.280592,
    -0.408195, 0.408127,
    0.191682, -0.191519,
    0.010131, -0.010157,
    0.118256, -0.118336,
};

float Cg_init[2] = {
    -0.107661, -0.107652
};

float xstd_init[12] = {
    0.000998, 0.000080, 0.012067, 0.079608, 0.003038, 0.000841, 0.090712, 0.181781, 0.000851, 0.000112, 0.019855, 0.075250
};

float xmean_init[12] = {
    0.006478, -0.007690, 0.004739, 0.143555, 0.008614, -0.006847, 0.107374, 0.442335, 0.004331, -0.007717, 0.010752, 0.126685
};

