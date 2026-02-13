// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_12\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.65%
// test_accuracy: 72.12%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt']}
// generated: 2026-02-13 14:49:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.142273, 0.142172,
    -0.288180, 0.288450,
    0.001680, -0.001718,
    0.077610, -0.077741,
    1.875570, -1.875702,
    -1.346157, 1.346301,
    -0.155542, 0.155530,
    0.270173, -0.270204,
    -0.809915, 0.809932,
    -0.329518, 0.329519,
    0.543696, -0.543716,
    1.432644, -1.432675,
};

float Cg_init[2] = {
    -0.722115, -0.722177
};

float xstd_init[12] = {
    0.000930, 0.000079, 0.008881, 0.066965, 0.000674, 0.000097, 0.014911, 0.052394, 0.003459, 0.001057, 0.122487, 0.219307
};

float xmean_init[12] = {
    0.005634, -0.007751, 0.002462, 0.096770, 0.002386, -0.007854, 0.004923, 0.048692, 0.009061, -0.006550, 0.140257, 0.476923
};

