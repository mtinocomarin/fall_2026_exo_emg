// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.13%
// test_accuracy: 76.92%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 16:04:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.425370, 0.425326,
    -0.413386, 0.413405,
    0.227575, -0.227575,
    0.609884, -0.609869,
    0.693982, -0.694001,
    -0.735107, 0.735173,
    -0.116667, 0.116655,
    -0.097329, 0.097304,
    0.735174, -0.735385,
    -0.145420, 0.145960,
    -0.303589, 0.303421,
    0.035389, -0.035600,
};

float Cg_init[2] = {
    -0.391558, -0.391587
};

float xstd_init[12] = {
    0.003733, 0.001390, 0.105567, 0.167037, 0.001266, 0.000386, 0.019324, 0.067332, 0.000514, 0.000076, 0.014721, 0.061349
};

float xmean_init[12] = {
    0.009764, -0.006255, 0.172110, 0.585906, 0.003050, -0.007758, 0.004996, 0.045459, 0.003088, -0.007813, 0.003838, 0.064864
};

