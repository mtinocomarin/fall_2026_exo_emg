// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_3\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.02%
// test_accuracy: 74.26%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 17:00:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.244445, 0.244309,
    -0.088758, 0.089070,
    -0.001639, 0.001605,
    0.103415, -0.103587,
    1.183221, -1.183210,
    -0.757695, 0.757644,
    -0.098681, 0.098705,
    0.020011, -0.020008,
    -0.374803, 0.374816,
    -0.381372, 0.381391,
    0.328252, -0.328293,
    0.695231, -0.695238,
};

float Cg_init[2] = {
    -0.310895, -0.310901
};

float xstd_init[12] = {
    0.000893, 0.000069, 0.007808, 0.062760, 0.000624, 0.000096, 0.013060, 0.049505, 0.003288, 0.000990, 0.114007, 0.202025
};

float xmean_init[12] = {
    0.005489, -0.007760, 0.002001, 0.090670, 0.002308, -0.007862, 0.003867, 0.042921, 0.008851, -0.006653, 0.128358, 0.464787
};

