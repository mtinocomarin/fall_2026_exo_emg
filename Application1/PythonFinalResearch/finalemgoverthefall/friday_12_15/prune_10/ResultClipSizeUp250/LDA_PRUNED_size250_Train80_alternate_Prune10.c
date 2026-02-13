// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.89%
// test_accuracy: 76.56%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_2.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-12 12:44:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.075521, 2.075553,
    0.802757, -0.802744,
    0.371303, -0.371324,
    2.164365, -2.164354,
    0.050526, -0.050665,
    -0.125643, 0.125749,
    0.282948, -0.282928,
    -0.990841, 0.990850,
    -0.199702, 0.199592,
    -0.231696, 0.231907,
    -0.612290, 0.612242,
    0.343451, -0.343523,
};

float Cg_init[2] = {
    -1.028525, -1.028530
};

float xstd_init[12] = {
    0.004218, 0.001873, 0.150712, 0.194710, 0.001573, 0.000280, 0.040417, 0.102867, 0.000654, 0.000170, 0.030568, 0.106795
};

float xmean_init[12] = {
    0.011233, -0.005449, 0.259091, 0.711818, 0.003660, -0.007711, 0.013333, 0.091136, 0.003567, -0.007719, 0.012879, 0.129318
};

