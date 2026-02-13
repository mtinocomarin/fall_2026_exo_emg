// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.37%
// test_accuracy: 69.64%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 12:40:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.588869, 0.588873,
    0.008398, -0.008366,
    0.342437, -0.342473,
    0.464197, -0.464180,
    -0.350229, 0.350217,
    0.138138, -0.138128,
    -0.035088, 0.035080,
    -0.007350, 0.007338,
    0.222094, -0.222153,
    -0.116498, 0.116737,
    -0.403636, 0.403572,
    0.070203, -0.070330,
};

float Cg_init[2] = {
    -0.183560, -0.183566
};

float xstd_init[12] = {
    0.004449, 0.002085, 0.151257, 0.205994, 0.001023, 0.000180, 0.026482, 0.079532, 0.000639, 0.000157, 0.029201, 0.104700
};

float xmean_init[12] = {
    0.010325, -0.005679, 0.244927, 0.685517, 0.003342, -0.007768, 0.008276, 0.074237, 0.003495, -0.007739, 0.012677, 0.114631
};

