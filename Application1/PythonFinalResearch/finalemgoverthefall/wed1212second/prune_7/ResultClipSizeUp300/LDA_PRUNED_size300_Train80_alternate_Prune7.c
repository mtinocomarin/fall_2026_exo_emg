// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_7\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.80%
// test_accuracy: 76.25%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_19.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 17:01:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.146283, -0.146233,
    -0.005571, 0.005453,
    -0.110484, 0.110499,
    -0.201364, 0.201430,
    1.438304, -1.438326,
    -1.214924, 1.214956,
    -0.349848, 0.349836,
    0.346980, -0.346981,
    -0.878903, 0.878906,
    -0.293020, 0.293033,
    0.327661, -0.327664,
    1.650366, -1.650379,
};

float Cg_init[2] = {
    -0.650833, -0.650845
};

float xstd_init[12] = {
    0.000889, 0.000062, 0.007054, 0.068768, 0.000716, 0.000121, 0.016239, 0.058450, 0.003285, 0.001056, 0.122565, 0.214913
};

float xmean_init[12] = {
    0.005560, -0.007762, 0.001280, 0.091040, 0.002377, -0.007848, 0.005760, 0.051680, 0.009067, -0.006579, 0.141227, 0.479360
};

