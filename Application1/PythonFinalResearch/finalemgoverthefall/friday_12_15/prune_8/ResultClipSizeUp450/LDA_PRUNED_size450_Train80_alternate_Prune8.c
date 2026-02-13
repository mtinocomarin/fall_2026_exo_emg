// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.76%
// test_accuracy: 78.12%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 12:43:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.975248, 0.975248,
    0.219374, -0.219373,
    0.266776, -0.266797,
    1.092015, -1.091992,
    -0.535526, 0.535633,
    0.185348, -0.185467,
    0.024769, -0.024773,
    -0.205938, 0.205951,
    0.319421, -0.319403,
    -0.082835, 0.082787,
    -0.746795, 0.746819,
    0.014269, -0.014272,
};

float Cg_init[2] = {
    -0.481475, -0.481474
};

float xstd_init[12] = {
    0.004433, 0.001863, 0.148696, 0.206975, 0.001310, 0.000225, 0.034612, 0.093892, 0.000697, 0.000179, 0.032396, 0.107132
};

float xmean_init[12] = {
    0.010667, -0.005645, 0.244792, 0.684791, 0.003496, -0.007744, 0.012153, 0.081771, 0.003562, -0.007723, 0.014514, 0.122604
};

