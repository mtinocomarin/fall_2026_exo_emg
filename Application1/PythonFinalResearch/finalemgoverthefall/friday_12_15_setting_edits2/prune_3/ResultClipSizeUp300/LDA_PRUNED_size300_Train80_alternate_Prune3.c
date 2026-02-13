// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_3\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.07%
// test_accuracy: 80.00%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-17 12:37:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.237874, 1.237884,
    0.379459, -0.379438,
    0.372815, -0.372833,
    0.942803, -0.942799,
    -0.304166, 0.304044,
    -0.046798, 0.046916,
    0.058365, -0.058358,
    -0.084890, 0.084882,
    -0.186505, 0.186443,
    0.005604, -0.005418,
    -0.325563, 0.325511,
    0.019983, -0.020063,
};

float Cg_init[2] = {
    -0.407361, -0.407363
};

float xstd_init[12] = {
    0.004705, 0.002137, 0.139867, 0.194602, 0.001426, 0.000258, 0.035645, 0.096141, 0.000665, 0.000154, 0.027818, 0.103248
};

float xmean_init[12] = {
    0.011088, -0.005471, 0.253518, 0.698896, 0.003573, -0.007727, 0.012782, 0.084966, 0.003556, -0.007731, 0.013425, 0.122897
};

