// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_10\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.57%
// test_accuracy: 69.74%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2026-02-13 14:48:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.163681, 0.163326,
    -0.134534, 0.135254,
    0.054407, -0.054479,
    0.163557, -0.163916,
    1.423095, -1.422905,
    -0.974584, 0.974223,
    -0.069108, 0.069206,
    0.105843, -0.105766,
    -0.443433, 0.443441,
    -0.332306, 0.332332,
    0.511201, -0.511222,
    0.942521, -0.942567,
};

float Cg_init[2] = {
    -0.488236, -0.488193
};

float xstd_init[12] = {
    0.000931, 0.000074, 0.007463, 0.065190, 0.000674, 0.000103, 0.013319, 0.049915, 0.003107, 0.000989, 0.117969, 0.209219
};

float xmean_init[12] = {
    0.005557, -0.007757, 0.001978, 0.090910, 0.002336, -0.007860, 0.003987, 0.043015, 0.008801, -0.006613, 0.134099, 0.475359
};

