// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_10\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.76%
// test_accuracy: 71.09%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt']}
// generated: 2026-02-13 14:47:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.035114, -0.035221,
    -0.239480, 0.239786,
    0.024891, -0.024952,
    -0.110562, 0.110431,
    2.129269, -2.129545,
    -2.022701, 2.023017,
    -0.177794, 0.177763,
    0.388559, -0.388593,
    -1.080857, 1.080924,
    -0.477730, 0.477661,
    0.367767, -0.367759,
    1.962201, -1.962245,
};

float Cg_init[2] = {
    -0.795210, -0.795302
};

float xstd_init[12] = {
    0.000918, 0.000086, 0.008513, 0.067586, 0.000813, 0.000141, 0.014893, 0.056204, 0.003556, 0.001070, 0.123014, 0.213471
};

float xmean_init[12] = {
    0.005589, -0.007755, 0.002121, 0.092046, 0.002419, -0.007844, 0.005227, 0.049773, 0.009154, -0.006553, 0.138788, 0.477728
};

