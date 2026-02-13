// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_13\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.35%
// test_accuracy: 76.04%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_16.txt', 'act2\\trial_27.txt', 'act2\\trial_30.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-17 17:06:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.558524, 0.558553,
    -0.128863, 0.128923,
    -0.189260, 0.189254,
    0.250248, -0.250285,
    2.205449, -2.205735,
    -1.844217, 1.844573,
    0.011960, -0.012025,
    0.153646, -0.153703,
    -0.488075, 0.488143,
    -0.668708, 0.668632,
    0.317569, -0.317573,
    1.455392, -1.455391,
};

float Cg_init[2] = {
    -0.753875, -0.753977
};

float xstd_init[12] = {
    0.000918, 0.000082, 0.008599, 0.065065, 0.000739, 0.000121, 0.014747, 0.053079, 0.003467, 0.000999, 0.116436, 0.209710
};

float xmean_init[12] = {
    0.005682, -0.007749, 0.002398, 0.097281, 0.002409, -0.007849, 0.004971, 0.048947, 0.008921, -0.006631, 0.132574, 0.464474
};

