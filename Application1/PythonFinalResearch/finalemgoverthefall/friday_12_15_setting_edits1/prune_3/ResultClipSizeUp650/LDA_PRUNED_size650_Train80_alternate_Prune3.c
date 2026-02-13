// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.72%
// test_accuracy: 68.23%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 13:12:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.478671, 0.478696,
    -0.126587, 0.126556,
    0.483269, -0.483268,
    0.272855, -0.272864,
    -0.329906, 0.329721,
    0.038429, -0.038230,
    0.010759, -0.010755,
    0.132523, -0.132544,
    0.241189, -0.241089,
    -0.342321, 0.342211,
    -0.210519, 0.210544,
    0.330679, -0.330676,
};

float Cg_init[2] = {
    -0.206636, -0.206636
};

float xstd_init[12] = {
    0.004680, 0.002225, 0.351589, 0.123381, 0.001094, 0.000192, 0.048409, 0.135197, 0.000650, 0.000159, 0.048783, 0.139936
};

float xmean_init[12] = {
    0.010563, -0.005574, 0.448851, 1.036437, 0.003398, -0.007760, 0.012261, 0.623161, 0.003532, -0.007732, 0.015134, 0.700230
};

