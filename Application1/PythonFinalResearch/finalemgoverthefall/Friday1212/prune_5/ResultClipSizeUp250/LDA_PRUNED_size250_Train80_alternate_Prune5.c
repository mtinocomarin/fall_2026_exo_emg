// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.57%
// test_accuracy: 78.12%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:48:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.999758, 0.999739,
    0.025906, -0.025906,
    0.479207, -0.479218,
    0.860550, -0.860532,
    0.827865, -0.828002,
    -1.025333, 1.025572,
    0.237116, -0.237203,
    -0.138510, 0.138497,
    -0.102301, 0.102299,
    0.270909, -0.270816,
    -0.393110, 0.393079,
    0.319383, -0.319425,
};

float Cg_init[2] = {
    -0.408817, -0.408825
};

float xstd_init[12] = {
    0.003646, 0.001314, 0.097813, 0.171497, 0.001671, 0.000508, 0.033662, 0.087654, 0.000876, 0.000093, 0.019587, 0.065604
};

float xmean_init[12] = {
    0.009773, -0.006272, 0.167778, 0.563704, 0.003228, -0.007720, 0.008395, 0.047963, 0.003209, -0.007806, 0.004444, 0.066481
};

