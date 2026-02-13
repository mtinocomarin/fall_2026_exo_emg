// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 79.03%
// test_accuracy: 72.50%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 16:04:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.631946, 0.631971,
    -0.220656, 0.220582,
    0.367675, -0.367687,
    0.731279, -0.731250,
    0.788551, -0.788432,
    -0.855472, 0.855371,
    -0.017347, 0.017362,
    -0.083880, 0.083859,
    -0.426603, 0.426356,
    0.271888, -0.271356,
    -0.350657, 0.350501,
    0.215694, -0.215952,
};

float Cg_init[2] = {
    -0.312895, -0.312869
};

float xstd_init[12] = {
    0.003632, 0.001333, 0.100987, 0.168075, 0.001561, 0.000465, 0.027245, 0.076793, 0.001645, 0.000090, 0.016298, 0.067138
};

float xmean_init[12] = {
    0.009816, -0.006288, 0.170366, 0.580387, 0.003198, -0.007728, 0.007011, 0.049161, 0.003223, -0.007809, 0.004387, 0.067033
};

