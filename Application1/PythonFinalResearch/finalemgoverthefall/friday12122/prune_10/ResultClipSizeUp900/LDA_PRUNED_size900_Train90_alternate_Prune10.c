// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.18%
// test_accuracy: 76.47%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:07:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.660918, 0.660912,
    -0.281731, 0.281766,
    0.535811, -0.535860,
    0.589567, -0.589551,
    0.919474, -0.919603,
    -0.950583, 0.950786,
    -0.117026, 0.116978,
    -0.128873, 0.128851,
    0.672795, -0.672773,
    0.071036, -0.071080,
    -0.372988, 0.373015,
    -0.014135, 0.014133,
};

float Cg_init[2] = {
    -0.477921, -0.477954
};

float xstd_init[12] = {
    0.003198, 0.001228, 0.102379, 0.165735, 0.001211, 0.000371, 0.018602, 0.068046, 0.000514, 0.000072, 0.014217, 0.060816
};

float xmean_init[12] = {
    0.009516, -0.006331, 0.173364, 0.585385, 0.003060, -0.007759, 0.004857, 0.047692, 0.003076, -0.007817, 0.003590, 0.062625
};

