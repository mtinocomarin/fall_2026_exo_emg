// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.54%
// test_accuracy: 55.47%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_14.txt', 'act1\\trial_28.txt', 'act1\\trial_2.txt']}
// generated: 2025-12-17 13:48:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.887667, 0.887699,
    0.275760, -0.275817,
    0.159338, -0.159336,
    -0.123572, 0.123600,
    -0.749035, 0.749013,
    -0.065937, 0.065953,
    0.396411, -0.396395,
    0.000946, -0.000944,
    -0.849616, 0.849679,
    0.323628, -0.323730,
    -0.088604, 0.088631,
    0.343480, -0.343458,
};

float Cg_init[2] = {
    -0.429538, -0.429557
};

float xstd_init[12] = {
    0.001015, 0.000078, 0.011645, 0.080706, 0.003016, 0.000828, 0.085782, 0.172896, 0.000873, 0.000118, 0.018396, 0.073926
};

float xmean_init[12] = {
    0.006456, -0.007684, 0.004386, 0.144869, 0.008591, -0.006865, 0.099561, 0.440132, 0.004395, -0.007714, 0.009649, 0.130526
};

