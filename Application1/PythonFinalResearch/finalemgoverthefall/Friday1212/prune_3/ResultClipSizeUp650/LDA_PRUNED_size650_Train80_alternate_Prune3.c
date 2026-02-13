// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.45%
// test_accuracy: 73.44%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:47:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.560079, 0.560063,
    -0.316743, 0.316724,
    0.387653, -0.387665,
    0.629583, -0.629557,
    0.697476, -0.697275,
    -0.734922, 0.734699,
    -0.004239, 0.004281,
    -0.071585, 0.071574,
    -0.425523, 0.425264,
    0.271409, -0.270942,
    -0.274610, 0.274477,
    0.135574, -0.135802,
};

float Cg_init[2] = {
    -0.259276, -0.259247
};

float xstd_init[12] = {
    0.003823, 0.001423, 0.109299, 0.172814, 0.001445, 0.000420, 0.025067, 0.073758, 0.001668, 0.000090, 0.015527, 0.067483
};

float xmean_init[12] = {
    0.009889, -0.006209, 0.181188, 0.590460, 0.003119, -0.007753, 0.006054, 0.047414, 0.003229, -0.007810, 0.003831, 0.065230
};

