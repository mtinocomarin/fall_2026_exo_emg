// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.55%
// test_accuracy: 63.16%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 12:45:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.665365, 0.665372,
    0.398339, -0.398374,
    0.604027, -0.604070,
    0.568312, -0.568288,
    -0.437725, 0.437482,
    0.195124, -0.194779,
    -0.102399, 0.102383,
    -0.024991, 0.024918,
    0.344494, -0.344231,
    -0.202200, 0.201672,
    -0.462957, 0.463096,
    0.023655, -0.023480,
};

float Cg_init[2] = {
    -0.373520, -0.373503
};

float xstd_init[12] = {
    0.003656, 0.001554, 0.150535, 0.205066, 0.000988, 0.000176, 0.025286, 0.078107, 0.000647, 0.000161, 0.029000, 0.101118
};

float xmean_init[12] = {
    0.009853, -0.005932, 0.240479, 0.679713, 0.003336, -0.007772, 0.007783, 0.072153, 0.003470, -0.007743, 0.011611, 0.109474
};

