// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_4\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 75.00%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 17:00:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.118803, 0.118914,
    -0.107411, 0.107310,
    -0.047483, 0.047495,
    0.060357, -0.060329,
    1.423624, -1.424038,
    -1.153252, 1.153831,
    -0.111696, 0.111596,
    0.073086, -0.073201,
    -0.446227, 0.446232,
    -0.498856, 0.498871,
    0.350823, -0.350871,
    0.959923, -0.959893,
};

float Cg_init[2] = {
    -0.383210, -0.383317
};

float xstd_init[12] = {
    0.000864, 0.000074, 0.008765, 0.062371, 0.000708, 0.000117, 0.013475, 0.050763, 0.003380, 0.001015, 0.116273, 0.207895
};

float xmean_init[12] = {
    0.005488, -0.007761, 0.002183, 0.088810, 0.002361, -0.007855, 0.004444, 0.045417, 0.009052, -0.006601, 0.133612, 0.470297
};

