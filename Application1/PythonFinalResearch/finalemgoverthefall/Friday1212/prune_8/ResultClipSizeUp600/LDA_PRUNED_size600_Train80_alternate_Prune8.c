// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.58%
// test_accuracy: 72.73%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:50:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.701994, 0.701954,
    -0.220154, 0.220196,
    0.363658, -0.363681,
    0.842996, -0.842983,
    0.791566, -0.791550,
    -0.873392, 0.873380,
    -0.064114, 0.064112,
    0.005278, -0.005282,
    -0.578780, 0.578689,
    0.459409, -0.459176,
    -0.430508, 0.430425,
    0.198526, -0.198630,
};

float Cg_init[2] = {
    -0.366674, -0.366663
};

float xstd_init[12] = {
    0.003767, 0.001329, 0.110014, 0.174036, 0.001470, 0.000418, 0.020462, 0.072900, 0.001816, 0.000093, 0.017251, 0.066570
};

float xmean_init[12] = {
    0.009874, -0.006220, 0.177425, 0.592273, 0.003168, -0.007749, 0.005152, 0.049621, 0.003280, -0.007808, 0.004848, 0.066591
};

