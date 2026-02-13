// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 88.46%
// test_accuracy: 78.57%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt']}
// generated: 2025-12-12 16:07:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.017363, 1.017358,
    -0.296525, 0.296511,
    0.767464, -0.767491,
    0.819587, -0.819553,
    1.343096, -1.343111,
    -1.894248, 1.894276,
    0.145791, -0.145784,
    -0.006168, 0.006154,
    1.031853, -1.031946,
    -0.042459, 0.042702,
    -0.584424, 0.584350,
    0.008749, -0.008844,
};

float Cg_init[2] = {
    -0.762996, -0.763010
};

float xstd_init[12] = {
    0.003826, 0.001417, 0.101487, 0.169704, 0.001770, 0.000555, 0.032373, 0.089514, 0.000544, 0.000090, 0.018910, 0.063925
};

float xmean_init[12] = {
    0.009950, -0.006202, 0.170110, 0.585604, 0.003358, -0.007674, 0.009377, 0.057802, 0.003132, -0.007808, 0.005128, 0.066594
};

