// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.75%
// test_accuracy: 73.44%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:52:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.078576, 1.078564,
    -0.168240, 0.168230,
    0.458881, -0.458898,
    1.285796, -1.285769,
    1.205807, -1.205785,
    -1.263179, 1.263184,
    0.014000, -0.014011,
    -0.163236, 0.163219,
    -0.730429, 0.730328,
    0.624904, -0.624633,
    -0.670169, 0.670071,
    0.257920, -0.258043,
};

float Cg_init[2] = {
    -0.597679, -0.597658
};

float xstd_init[12] = {
    0.003850, 0.001451, 0.106301, 0.174737, 0.001754, 0.000541, 0.032187, 0.088944, 0.001691, 0.000096, 0.020921, 0.066655
};

float xmean_init[12] = {
    0.009899, -0.006211, 0.174750, 0.581500, 0.003330, -0.007709, 0.008333, 0.055125, 0.003336, -0.007800, 0.006083, 0.071000
};

