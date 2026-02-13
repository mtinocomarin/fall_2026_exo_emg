// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.25%
// test_accuracy: 63.28%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 13:13:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.704433, 0.704412,
    -0.088419, 0.088421,
    0.685203, -0.685189,
    0.318338, -0.318344,
    -0.361151, 0.361322,
    0.061165, -0.061331,
    -0.025682, 0.025666,
    0.140623, -0.140606,
    0.205303, -0.205268,
    -0.330161, 0.330083,
    -0.252169, 0.252200,
    0.375138, -0.375133,
};

float Cg_init[2] = {
    -0.296628, -0.296625
};

float xstd_init[12] = {
    0.004747, 0.002154, 0.346397, 0.123968, 0.001297, 0.000227, 0.058214, 0.136871, 0.000678, 0.000171, 0.054070, 0.139975
};

float xmean_init[12] = {
    0.010734, -0.005590, 0.445512, 1.032693, 0.003513, -0.007740, 0.017468, 0.628076, 0.003543, -0.007731, 0.016346, 0.700577
};

