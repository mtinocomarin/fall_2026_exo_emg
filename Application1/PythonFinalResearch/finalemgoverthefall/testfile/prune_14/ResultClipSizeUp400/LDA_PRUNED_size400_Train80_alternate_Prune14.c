// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_14\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.84%
// test_accuracy: 73.21%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_27.txt', 'act2\\trial_30.txt']}
// generated: 2026-02-13 14:50:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.063829, -0.063778,
    -0.369946, 0.369793,
    0.099450, -0.099424,
    -0.107543, 0.107618,
    2.378944, -2.378888,
    -2.068794, 2.068738,
    -0.262047, 0.262047,
    0.351273, -0.351263,
    -0.861248, 0.861251,
    -0.550285, 0.550298,
    0.167427, -0.167448,
    2.107822, -2.107810,
};

float Cg_init[2] = {
    -0.909016, -0.908997
};

float xstd_init[12] = {
    0.000961, 0.000084, 0.007868, 0.070910, 0.000790, 0.000131, 0.014603, 0.055486, 0.003500, 0.001034, 0.119853, 0.215893
};

float xmean_init[12] = {
    0.005656, -0.007750, 0.001799, 0.098889, 0.002441, -0.007843, 0.005503, 0.053809, 0.009164, -0.006562, 0.137355, 0.479365
};

