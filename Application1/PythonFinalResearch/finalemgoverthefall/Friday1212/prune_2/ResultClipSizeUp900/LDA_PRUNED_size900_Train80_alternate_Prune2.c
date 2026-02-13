// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.71%
// test_accuracy: 72.79%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:46:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.448063, 0.448088,
    -0.261169, 0.261149,
    0.314545, -0.314574,
    0.488724, -0.488716,
    0.611195, -0.611146,
    -0.679307, 0.679254,
    -0.013922, 0.013941,
    -0.036229, 0.036212,
    -0.304164, 0.304083,
    0.259499, -0.259306,
    -0.214303, 0.214245,
    0.075768, -0.075874,
};

float Cg_init[2] = {
    -0.195399, -0.195395
};

float xstd_init[12] = {
    0.003453, 0.001372, 0.104766, 0.166595, 0.001266, 0.000360, 0.021123, 0.069045, 0.001383, 0.000079, 0.013156, 0.062929
};

float xmean_init[12] = {
    0.009663, -0.006266, 0.177151, 0.587843, 0.003038, -0.007772, 0.004915, 0.046118, 0.003168, -0.007814, 0.003007, 0.063294
};

