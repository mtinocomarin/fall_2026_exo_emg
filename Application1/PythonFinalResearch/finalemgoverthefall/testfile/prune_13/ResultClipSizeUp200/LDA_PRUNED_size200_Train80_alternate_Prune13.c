// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_13\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.49%
// test_accuracy: 64.58%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_22.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt']}
// generated: 2026-02-13 14:49:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.993498, -0.993552,
    0.006520, -0.006425,
    -0.468994, 0.468986,
    -0.777154, 0.777110,
    2.882645, -2.882603,
    -2.177720, 2.177676,
    -0.354439, 0.354452,
    0.152657, -0.152663,
    -1.514468, 1.514483,
    -0.516014, 0.515998,
    0.457756, -0.457746,
    3.686309, -3.686326,
};

float Cg_init[2] = {
    -1.481865, -1.481852
};

float xstd_init[12] = {
    0.000889, 0.000050, 0.004287, 0.061084, 0.000839, 0.000142, 0.018284, 0.062119, 0.002994, 0.000933, 0.123957, 0.227966
};

float xmean_init[12] = {
    0.005540, -0.007769, 0.000702, 0.084561, 0.002433, -0.007840, 0.006550, 0.054737, 0.008771, -0.006642, 0.142456, 0.484912
};

