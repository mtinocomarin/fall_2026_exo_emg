// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_7\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.00%
// test_accuracy: 77.50%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 12:39:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.453125, 1.453132,
    0.434773, -0.434756,
    0.562129, -0.562155,
    1.115808, -1.115789,
    -0.479557, 0.479559,
    -0.003615, 0.003585,
    0.149743, -0.149739,
    -0.152049, 0.152065,
    -0.096955, 0.096891,
    -0.014403, 0.014558,
    -0.396273, 0.396230,
    -0.195568, 0.195502,
};

float Cg_init[2] = {
    -0.568854, -0.568855
};

float xstd_init[12] = {
    0.004594, 0.001963, 0.143193, 0.197014, 0.001481, 0.000271, 0.037350, 0.098326, 0.000688, 0.000159, 0.027999, 0.105022
};

float xmean_init[12] = {
    0.011029, -0.005547, 0.251840, 0.699680, 0.003604, -0.007721, 0.013547, 0.088160, 0.003571, -0.007728, 0.013227, 0.124000
};

