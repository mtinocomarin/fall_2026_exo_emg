// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_10\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.67%
// test_accuracy: 73.96%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt']}
// generated: 2026-02-13 14:47:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.124257, -0.124258,
    -0.059284, 0.059249,
    -0.048139, 0.048152,
    -0.177690, 0.177705,
    1.846032, -1.845916,
    -1.638488, 1.638336,
    -0.219021, 0.219044,
    0.211486, -0.211464,
    -0.355475, 0.355490,
    -1.128077, 1.128055,
    0.322573, -0.322570,
    1.720699, -1.720694,
};

float Cg_init[2] = {
    -0.661176, -0.661145
};

float xstd_init[12] = {
    0.000851, 0.000080, 0.008040, 0.065739, 0.000807, 0.000142, 0.015457, 0.059917, 0.003324, 0.000953, 0.113572, 0.207778
};

float xmean_init[12] = {
    0.005561, -0.007761, 0.001717, 0.090909, 0.002412, -0.007844, 0.005354, 0.051515, 0.008947, -0.006671, 0.126869, 0.466818
};

