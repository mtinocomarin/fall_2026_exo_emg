// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 77.02%
// test_accuracy: 72.92%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt']}
// generated: 2025-12-12 16:03:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.510386, 0.510361,
    -0.314268, 0.314267,
    0.315599, -0.315621,
    0.649466, -0.649441,
    0.644041, -0.643892,
    -0.702848, 0.702691,
    0.011159, -0.011134,
    -0.085343, 0.085331,
    -0.369042, 0.368814,
    0.272364, -0.271906,
    -0.267374, 0.267248,
    0.112809, -0.113037,
};

float Cg_init[2] = {
    -0.248023, -0.247999
};

float xstd_init[12] = {
    0.003762, 0.001399, 0.106694, 0.168057, 0.001447, 0.000424, 0.024708, 0.072591, 0.001577, 0.000087, 0.014958, 0.067297
};

float xmean_init[12] = {
    0.009864, -0.006242, 0.175085, 0.586565, 0.003124, -0.007747, 0.006061, 0.047374, 0.003213, -0.007810, 0.003805, 0.065505
};

