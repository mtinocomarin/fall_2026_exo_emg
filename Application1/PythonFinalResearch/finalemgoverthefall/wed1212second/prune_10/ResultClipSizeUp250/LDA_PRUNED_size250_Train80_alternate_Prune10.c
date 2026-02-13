// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_10\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.05%
// test_accuracy: 71.88%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 17:03:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.231735, -0.231839,
    0.213557, -0.213306,
    -0.142091, 0.142040,
    -0.509011, 0.508879,
    1.930110, -1.930127,
    -1.780284, 1.780291,
    -0.274131, 0.274135,
    0.345071, -0.345060,
    -0.775556, 0.775549,
    -0.786847, 0.786822,
    0.592667, -0.592655,
    2.069242, -2.069232,
};

float Cg_init[2] = {
    -0.887048, -0.887030
};

float xstd_init[12] = {
    0.000921, 0.000067, 0.008416, 0.069599, 0.000824, 0.000145, 0.016241, 0.059463, 0.003104, 0.000910, 0.117481, 0.217860
};

float xmean_init[12] = {
    0.005609, -0.007760, 0.001515, 0.092500, 0.002393, -0.007843, 0.006061, 0.054545, 0.008962, -0.006620, 0.144242, 0.485000
};

