// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_12\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 75.00%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_16.txt', 'act2\\trial_27.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-17 17:05:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.421019, 0.421064,
    -0.139390, 0.139422,
    -0.158073, 0.158069,
    0.181566, -0.181589,
    2.071135, -2.071464,
    -1.716483, 1.716895,
    -0.012239, 0.012164,
    0.122814, -0.122879,
    -0.443286, 0.443344,
    -0.679423, 0.679355,
    0.379832, -0.379846,
    1.353321, -1.353307,
};

float Cg_init[2] = {
    -0.689132, -0.689242
};

float xstd_init[12] = {
    0.000912, 0.000081, 0.008397, 0.064901, 0.000731, 0.000119, 0.014480, 0.052425, 0.003460, 0.000990, 0.115011, 0.208089
};

float xmean_init[12] = {
    0.005652, -0.007751, 0.002278, 0.096834, 0.002405, -0.007850, 0.004833, 0.048000, 0.008939, -0.006638, 0.130889, 0.463000
};

