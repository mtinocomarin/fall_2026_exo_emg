// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.11%
// test_accuracy: 77.68%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 16:05:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.602079, 0.602049,
    -0.341224, 0.341227,
    0.431951, -0.431963,
    0.624499, -0.624479,
    0.939044, -0.938892,
    -0.997232, 0.997059,
    -0.056746, 0.056768,
    -0.103643, 0.103637,
    0.696165, -0.696338,
    -0.013329, 0.013824,
    -0.372745, 0.372591,
    -0.063960, 0.063733,
};

float Cg_init[2] = {
    -0.443079, -0.443066
};

float xstd_init[12] = {
    0.003598, 0.001308, 0.102349, 0.166494, 0.001365, 0.000428, 0.025139, 0.074018, 0.000521, 0.000073, 0.014886, 0.063894
};

float xmean_init[12] = {
    0.009643, -0.006305, 0.173794, 0.582168, 0.003118, -0.007741, 0.006568, 0.049310, 0.003099, -0.007813, 0.003777, 0.065567
};

