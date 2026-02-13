// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.98%
// test_accuracy: 58.33%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 13:43:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.438248, 0.438159,
    -0.022168, 0.022346,
    0.126756, -0.126783,
    0.121217, -0.121298,
    -0.573222, 0.573169,
    -0.041486, 0.041550,
    0.199522, -0.199508,
    0.095836, -0.095853,
    -0.626271, 0.626221,
    -0.069096, 0.069217,
    -0.037288, 0.037250,
    0.532454, -0.532487,
};

float Cg_init[2] = {
    -0.237952, -0.237954
};

float xstd_init[12] = {
    0.001014, 0.000077, 0.010104, 0.081952, 0.002260, 0.000608, 0.073540, 0.153444, 0.000901, 0.000116, 0.019341, 0.075668
};

float xmean_init[12] = {
    0.006426, -0.007690, 0.004127, 0.143095, 0.008543, -0.006926, 0.096190, 0.450000, 0.004337, -0.007717, 0.010317, 0.135238
};

