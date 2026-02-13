// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_6\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.69%
// test_accuracy: 77.50%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_19.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 17:01:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.132350, -0.132256,
    0.023378, -0.023617,
    -0.112417, 0.112451,
    -0.189570, 0.189704,
    1.413067, -1.413029,
    -1.147879, 1.147817,
    -0.324715, 0.324719,
    0.271881, -0.271860,
    -0.735356, 0.735355,
    -0.358748, 0.358788,
    0.402014, -0.402036,
    1.401085, -1.401093,
};

float Cg_init[2] = {
    -0.580146, -0.580144
};

float xstd_init[12] = {
    0.000877, 0.000062, 0.006921, 0.068418, 0.000705, 0.000119, 0.015961, 0.057769, 0.003281, 0.001046, 0.120828, 0.212097
};

float xmean_init[12] = {
    0.005545, -0.007763, 0.001231, 0.089692, 0.002371, -0.007849, 0.005538, 0.050462, 0.009122, -0.006574, 0.141026, 0.480000
};

