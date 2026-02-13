// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.44%
// test_accuracy: 57.03%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_14.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-17 13:47:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.835030, 0.835093,
    0.295608, -0.295744,
    0.137759, -0.137748,
    -0.156140, 0.156214,
    -0.647300, 0.647289,
    -0.071232, 0.071221,
    0.307737, -0.307713,
    0.027518, -0.027512,
    -0.917047, 0.917123,
    0.311567, -0.311677,
    -0.037566, 0.037592,
    0.366399, -0.366376,
};

float Cg_init[2] = {
    -0.407705, -0.407731
};

float xstd_init[12] = {
    0.001000, 0.000077, 0.011456, 0.079551, 0.002989, 0.000814, 0.084730, 0.172156, 0.000871, 0.000117, 0.018693, 0.072792
};

float xmean_init[12] = {
    0.006432, -0.007686, 0.004250, 0.144625, 0.008524, -0.006885, 0.097417, 0.435000, 0.004396, -0.007713, 0.009917, 0.130625
};

