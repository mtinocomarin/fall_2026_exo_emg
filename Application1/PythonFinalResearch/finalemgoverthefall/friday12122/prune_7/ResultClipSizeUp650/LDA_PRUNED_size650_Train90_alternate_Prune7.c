// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 79.45%
// test_accuracy: 73.96%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-12 16:05:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.683092, 0.683060,
    -0.189470, 0.189470,
    0.506906, -0.506922,
    0.646304, -0.646277,
    0.849105, -0.848962,
    -0.871995, 0.871842,
    -0.036309, 0.036334,
    -0.097814, 0.097807,
    -0.454309, 0.454113,
    0.305408, -0.305031,
    -0.294980, 0.294876,
    0.141109, -0.141296,
};

float Cg_init[2] = {
    -0.317822, -0.317798
};

float xstd_init[12] = {
    0.003535, 0.001287, 0.101851, 0.168183, 0.001519, 0.000448, 0.026212, 0.076084, 0.001670, 0.000090, 0.015557, 0.068888
};

float xmean_init[12] = {
    0.009728, -0.006296, 0.172146, 0.582816, 0.003188, -0.007733, 0.006743, 0.050230, 0.003247, -0.007808, 0.004100, 0.067529
};

