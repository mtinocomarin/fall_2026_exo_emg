// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_13\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.72%
// test_accuracy: 73.21%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_29.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_27.txt', 'act2\\trial_12.txt']}
// generated: 2026-02-13 14:49:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.566846, 0.566800,
    -0.133050, 0.133177,
    -0.174965, 0.174952,
    0.362310, -0.362381,
    2.096019, -2.096077,
    -1.745588, 1.745651,
    0.098505, -0.098515,
    0.257746, -0.257755,
    -0.613797, 0.613811,
    -0.469722, 0.469706,
    0.567782, -0.567807,
    1.389604, -1.389590,
};

float Cg_init[2] = {
    -0.788137, -0.788160
};

float xstd_init[12] = {
    0.000936, 0.000081, 0.008883, 0.065131, 0.000719, 0.000113, 0.014488, 0.052514, 0.003309, 0.000992, 0.119262, 0.214178
};

float xmean_init[12] = {
    0.005687, -0.007749, 0.002607, 0.096918, 0.002382, -0.007853, 0.004662, 0.047519, 0.008805, -0.006626, 0.134537, 0.465263
};

