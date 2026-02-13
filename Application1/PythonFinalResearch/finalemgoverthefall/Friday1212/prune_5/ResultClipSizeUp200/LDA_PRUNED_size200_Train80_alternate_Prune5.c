// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.04%
// test_accuracy: 81.25%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:47:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.607402, 0.607451,
    -0.349895, 0.349885,
    0.705965, -0.705954,
    0.390215, -0.390254,
    1.082707, -1.082685,
    -1.266120, 1.266185,
    -0.016927, 0.016853,
    0.167072, -0.167084,
    1.048035, -1.047841,
    -0.655658, 0.655178,
    -0.395121, 0.395252,
    0.581446, -0.581260,
};

float Cg_init[2] = {
    -0.604169, -0.604125
};

float xstd_init[12] = {
    0.003164, 0.001084, 0.096998, 0.158898, 0.001493, 0.000476, 0.025957, 0.075527, 0.000523, 0.000099, 0.017475, 0.063638
};

float xmean_init[12] = {
    0.009604, -0.006304, 0.168066, 0.570123, 0.003099, -0.007742, 0.006091, 0.044444, 0.003134, -0.007803, 0.004115, 0.065432
};

