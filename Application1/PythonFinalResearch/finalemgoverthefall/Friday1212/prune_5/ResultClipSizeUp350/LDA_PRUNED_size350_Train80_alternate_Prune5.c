// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.41%
// test_accuracy: 73.96%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-12 15:48:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.902903, 0.902918,
    -0.212660, 0.212759,
    0.594393, -0.594422,
    0.819465, -0.819505,
    0.934290, -0.934411,
    -1.241242, 1.241441,
    0.154548, -0.154624,
    -0.029231, 0.029220,
    -0.356549, 0.356700,
    0.550057, -0.550539,
    -0.502086, 0.502253,
    0.153755, -0.153531,
};

float Cg_init[2] = {
    -0.421179, -0.421227
};

float xstd_init[12] = {
    0.003758, 0.001389, 0.101088, 0.173905, 0.001690, 0.000511, 0.032932, 0.087627, 0.001031, 0.000091, 0.019810, 0.064620
};

float xmean_init[12] = {
    0.009838, -0.006235, 0.169877, 0.573827, 0.003252, -0.007714, 0.008560, 0.050864, 0.003208, -0.007807, 0.004856, 0.066296
};

