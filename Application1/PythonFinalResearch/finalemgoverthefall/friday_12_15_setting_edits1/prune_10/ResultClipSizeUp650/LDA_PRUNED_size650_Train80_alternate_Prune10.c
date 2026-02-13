// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.20%
// test_accuracy: 68.23%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-12 13:16:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.533332, 0.533333,
    -0.152629, 0.152630,
    0.773546, -0.773530,
    0.389666, -0.389680,
    -0.624770, 0.624791,
    0.187374, -0.187389,
    0.080954, -0.080955,
    0.117329, -0.117332,
    0.355352, -0.355420,
    -0.531699, 0.531795,
    -0.248532, 0.248503,
    0.546200, -0.546215,
};

float Cg_init[2] = {
    -0.371925, -0.371933
};

float xstd_init[12] = {
    0.004611, 0.002205, 0.360445, 0.127346, 0.001061, 0.000191, 0.046390, 0.135302, 0.000686, 0.000172, 0.051519, 0.137050
};

float xmean_init[12] = {
    0.010710, -0.005517, 0.468938, 1.036743, 0.003401, -0.007759, 0.012247, 0.620909, 0.003577, -0.007724, 0.015152, 0.707273
};

